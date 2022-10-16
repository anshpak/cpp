#include <iostream>
#include <fstream> // for work with files
#include "tree.h"

int main()
{
	Tree tree;
	ifstream f("data.dat");
	if (f.is_open()) {
		int temp;
		while (not f.eof()) {
			f >> temp;
			cout << temp << " ";
		}
	}
	else {
		cout << "The file wasn't open.";
	}
	f.close();
}