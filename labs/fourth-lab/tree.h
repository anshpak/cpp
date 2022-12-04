// объ€вление класса и функций
// функции определ€ю в tvector.cpp
#ifndef TREE_H // предотвращение многократного включени€
#define TREE_H // заголовочного файла
#include <iostream>
#include <string.h>

using namespace std;
/* #ifndef и #endif - директивы препроцессора, которые предотвращают многократное включение кода, расположенного между ними.
≈сли загловок еще не включалс€ в файл, то им€ TVECTOR-HEADER_H определ€етс€ директивой #define.
*/

template <class my_type> struct node {
	my_type info; // информационное поле узла дерева
	int count;
	node* left, * right;
};

template <class my_type> class Tree {
	node<my_type>* root;
public:
	Tree();
	node<my_type>* get_root();
	void del_tree(node<my_type>* vertex);
	/* рекурсивна€ функци€, используема€ в деструкторе(освобождение пам€ти) */
	~Tree();
	void push(node<my_type>*& vertex, float data); // вставка элемента в дерево
	void show(node<my_type>* vertex); // вывод дерева на экран
	node<my_type>* find(node<my_type>* vertex, float key); // поиск по ключу
	void print_leaves(node<my_type>* vertex); // вывод листьев дерева на экран
	int get_height(node<my_type>* vertex);
	node<my_type>* get_max(node<my_type>* vertex);
	void work_with_types(node<my_type>* root);
	void write_to_file(node<my_type>* vertex, ofstream& f);
};

template <class my_type> void print_node(node<my_type>* vertex);
void show_menu();

template <class my_type> Tree<my_type>::Tree() {
	root = 0;
}

template <class my_type> Tree<my_type>::~Tree() {
	del_tree(root);
}

template <class my_type> node<my_type>* Tree<my_type>::get_root() {
	return root;
}

template <class my_type> void Tree<my_type>::del_tree(node<my_type>* vertex) {
	if (vertex == 0) {
		return;
	} // for empty trees
	if (vertex->left != 0) {
		del_tree(vertex->left);
	}
	if (vertex->right != 0) {
		del_tree(vertex->right);
	}
	delete vertex;
}

template <class my_type> void Tree<my_type>::push(node<my_type>*& vertex, float data) {
	if (vertex == 0) {
		try
		{
			vertex = new node<my_type>;
			if (!vertex) throw exception();
			vertex->info = data;
			vertex->left = 0;
			vertex->right = 0;
			vertex->count = 1;
		}
		catch (const std::exception& ex)
		{
			cout << "No memory" << endl;
			return;
		}
	}
	else if (data < vertex->info) {
		push(vertex->left, data);
	}
	else if (data > vertex->info) {
		push(vertex->right, data);
	}
	else {
		vertex->count++;
	}
}

template <class my_type> void Tree<my_type>::show(node<my_type>* vertex) {
	if (vertex != 0) {
		show(vertex->left);
		print_node(vertex);
		show(vertex->right);
	}
}

template <class my_type> node<my_type>* Tree<my_type>::find(node<my_type>* vertex, float key) {
	if (vertex == 0) {
		return 0;
	}
	else if (key < vertex->info) {
		return find(vertex->left, key);
	}
	else if (key > vertex->info) {
		return find(vertex->right, key);
	}
	else {
		return vertex;
	}
}

template <class my_type> void Tree<my_type>::print_leaves(node<my_type>* vertex) {
	if (vertex == 0) {
		return;
	}
	else if ((vertex->left == 0) && (vertex->right == 0)) {
		print_node(vertex);
	}
	else {
		print_leaves(vertex->left);
		print_leaves(vertex->right);
	}
}

template <class my_type> int Tree<my_type>::get_height(node<my_type>* vertex) {
	if (vertex == 0) {
		return 0;
	}
	return 1 + max(get_height(vertex->left), get_height(vertex->right));
}

template <class my_type> node<my_type>* Tree<my_type>::get_max(node<my_type>* vertex) {
	if (vertex->right == 0) {
		return vertex;
	}
	else {
		return get_max(vertex->right);
	}
}

template <class my_type> void print_node(node<my_type>* vertex) {
	cout << "The value: " << vertex->info << " - " << vertex->count;
	cout << " pieces" << endl;
}

void show_menu() {
	cout << "Press:\n";
	cout << "1 - to show tree lcr;\n";
	cout << "2 - to find max node;\n";
	cout << "3 - to get tree height;\n";
	cout << "4 - to print leaves;\n";
	cout << "5 - to find node\n";
	cout << "6 - to add node\n";
	cout << "q - to quit.\n";
}

template <class my_type> void Tree<my_type>::work_with_types(node<my_type>* root) {
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
			this->show(root);
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '2': {
			system("cls");
			cout << "The max node is:\n";
			print_node(this->get_max(root));
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '3': {
			system("cls");
			cout << "Tree height is: \n";
			cout << this->get_height(root) << "\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '4': {
			system("cls");
			cout << "Tree leaves:\n";
			this->print_leaves(root);
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '5': {
			system("cls");
			cout << "Enter the value: \n";
			my_type tmp_key;
			cin >> tmp_key;
			node<my_type>* max_vertex = this->find(root, tmp_key);
			if (max_vertex == 0) {
				cout << "There is no node with such value.\n";
			}
			else {
				cout << "Your node is:\n";
				print_node(max_vertex);
			}
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '6': {
			system("cls");
			cout << "Enter the value to add: \n";
			my_type tmp_value;
			cin >> tmp_value;
			this->push(root, tmp_value);
			print_node(this->find(root, tmp_value));
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		default:
			break;
		}
	}
}

template <class my_type> void Tree<my_type>::write_to_file(node<my_type>* vertex, ofstream& f) {
	if (vertex != 0) {
		write_to_file(vertex->left, f);
		f << vertex->info << endl;
		write_to_file(vertex->right, f);
	}
}

#endif