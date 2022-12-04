#include <iostream>
#include "tvector.h"
#include <string>
#include <stdlib.h>
#include <ctime>
#include <fstream>

int main() {
	//srand(time(NULL));
	const int ARR_OF_VECTORS_SIZE = 10;
	Tvector vectors[ARR_OF_VECTORS_SIZE];
	int data[ARR_OF_VECTORS_SIZE][vector_size];
	string names[ARR_OF_VECTORS_SIZE];
	
	// to check how the random vectors work
	/*for (int i = 0; i < ARR_OF_VECTORS_SIZE; i++) {
		vectors[i] = Tvector(to_string(i));
	}*/

	// direct input
	ifstream f;
	int temp;
	f.open("data.dat");
	for (int i = 0; i < ARR_OF_VECTORS_SIZE; i++) {
		for (int j = 0; j < vector_size; j++) {
			f >> data[i][j];
		}
	}
	f.close();

	f.open("names.dat");
	for (int i = 0; i < ARR_OF_VECTORS_SIZE; i++) {
		f >> names[i];
	}
	f.close();
	
	for (int i = 0; i < ARR_OF_VECTORS_SIZE; i++) {
		vectors[i] = Tvector("temp", data[i]);
		vectors[i].set_name(names[i]);
	}
	
	char ch = NULL;
	while (ch != 'q') {
		system("cls");
		show_menu();
		cin >> ch;
		switch (ch)
		{
		case '1': {
			system("cls");
			cout << "All the vectors: \n";
			for (int i = 0; i < ARR_OF_VECTORS_SIZE; i++) {
				cout << i + 1 << ". " << vectors[i] << "\n";
			}
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '2': {
			system("cls");
			cout << "Compare two random vectors: \n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			int k = rand() % ARR_OF_VECTORS_SIZE;
			cout << "1. " << vectors[j] << "\n";
			cout << "2. " << vectors[k] << "\n";
			bool check = vectors[j] == vectors[k];
			cout << "Are these two vectors equal?\nThe answer is " << std::boolalpha << check << ".\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '3': {
			system("cls");
			cout << "Check if two random vectors are orthogonal: \n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			int k = rand() % ARR_OF_VECTORS_SIZE;
			cout << "1. " << vectors[j] << "\n";
			cout << "2. " << vectors[k] << "\n";
			bool check = vectors[j] * vectors[k];
			cout << "Are these two vectors orthogonal?\nThe answer is " << std::boolalpha << check << ".\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '4': {
			system("cls");
			cout << "Show the intersection of two random non orthogonal vectors: \n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			int k = rand() % ARR_OF_VECTORS_SIZE;
			while (vectors[j] * vectors[k]) {
				j = rand() % ARR_OF_VECTORS_SIZE;
				k = rand() % ARR_OF_VECTORS_SIZE;
			}
			cout << "1. " << vectors[j] << "\n";
			cout << "2. " << vectors[k] << "\n";
			cout << "The intersection looks like that: " << vectors[j] / vectors[k];
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '5': {
			system("cls");
			cout << "Show how many times " << X << " appears in random vector;\n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			cout << "The value " << X << " appears " << vectors[j].get_X_amount() << " times in vector " << vectors[j] << "\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		default:
			break;
		}
	}
	ofstream fil;
	fil.open("res.txt");
	for (int i = 0; i < ARR_OF_VECTORS_SIZE; i++) {
		fil << vectors[i].get_name() << "\t";
		fil << "{ ";
		int tmp_val[vector_size];
		vectors[i].get_values(tmp_val);
		for (int j = 0; j < vector_size; j++) {
			fil << tmp_val[j] << " ";
		}
		fil << "}" << endl;
	}
	fil.close();
}