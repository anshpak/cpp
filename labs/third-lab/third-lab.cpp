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
			tree.push(tree.root, temp);
		}
	}
	else {
		cout << "The file wasn't open.";
	}
	f.close();
	tree.show(tree.root);
	int height = tree.get_height(tree.root);
	cout << height;
}