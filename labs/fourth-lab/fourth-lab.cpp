﻿#include <iostream>
#include <fstream> // for work with files
#include "tree.h"

int main()
{
	int choice;
	cout << "Choose type of data" << endl;
	cout << "1 - int" << endl;
	cout << "2 - float" << endl;
	cout << "3 - char" << endl;
	cin >> choice;
	switch(choice) {
		case 1: {
			Tree<int> tree;
			node<int>* root = tree.get_root();
			ifstream f;
			/*Специфика работы с файлами: по умолчанию в классе ifstream
			отключена обработка исключительных ситуаций
			Для того, чтобы включить обработку исключительных ситуаций*/
			f.exceptions(ifstream::badbit | ifstream::failbit);
			try
			{
				f.open("int.dat");
			}
			catch (const ifstream::failure& ex)
			{
				// класс exception именно для ошибок ifstream
				cout << ex.what() << endl;
				cout << ex.code() << endl;
			}

			int temp;
			while (not f.eof()) {
				f >> temp;
				tree.push(root, temp);
			}

			f.close();
			tree.work_with_types(root);

			break;
		}
		case 2: {
			Tree<float> tree;
			node<float>* root = tree.get_root();
			ifstream f("float.dat");
			if (f.is_open()) {
				float temp;
				while (not f.eof()) {
					f >> temp;
					tree.push(root, temp);
				}
			}
			else {
				cout << "The file wasn't open.";
			}
			f.close();
			tree.work_with_types(root);
			break;
		}
		case 3: {
			Tree<char> tree;
			node<char>* root = tree.get_root();
			ifstream f("char.dat");
			if (f.is_open()) {
				char temp;
				while (not f.eof()) {
					f >> temp;
					tree.push(root, temp);
				}
			}
			else {
				cout << "The file wasn't open.";
			}
			f.close();
			tree.work_with_types(root);
			break;
		}
		default:
			break;
	}
}