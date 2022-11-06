#include <iostream>
#include <fstream> // for work with files
#include "tree.h"

int main()
{
	Tree<float> tree;
	node<float>* root = tree.get_root();
	ifstream f("data.dat");
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
	char ch = NULL;
	while (ch != 'q') {
		system("cls");
		show_menu();
		cin >> ch;
		switch (ch)
		{
		case '1': {
			system("cls");
			cout << "Tree\n";
			tree.show(root);
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '2': {
			system("cls");
			cout << "The max node is:\n";
			tree.print_node(tree.get_max(root));
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '3': {
			system("cls");
			cout << "Tree height is: \n";
			cout << tree.get_height(root) << "\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '4': {
			system("cls");
			cout << "Tree leaves:\n";
			tree.print_leaves(root);
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '5': {
			system("cls");
			cout << "Enter the value: \n";
			float tmp_key;
			cin >> tmp_key;
			node<float>* max_vertex = tree.find(root, tmp_key);
			if (max_vertex == 0) {
				cout << "There is no node with such value.\n";
			}
			else {
				cout << "Your node is:\n";
				tree.print_node(max_vertex);
			}
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '6': {
			system("cls");
			cout << "Enter the value to add: \n";
			float tmp_value;
			cin >> tmp_value;
			tree.push(root, tmp_value);
			tree.print_node(tree.find(root, tmp_value));
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}

		default:
			break;
		}
	}
}