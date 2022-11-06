// ���������� ������ � �������
// ������� ��������� � tvector.cpp
#ifndef TREE_H // �������������� ������������� ���������
#define TREE_H // ������������� �����
#include <iostream>
#include <string.h>

using namespace std;
/* #ifndef � #endif - ��������� �������������, ������� ������������� ������������ ��������� ����, �������������� ����� ����.
���� �������� ��� �� ��������� � ����, �� ��� TVECTOR-HEADER_H ������������ ���������� #define.
*/

template <class my_type> struct node {
	my_type info; // �������������� ���� ���� ������
	int count;
	node* left, * right;
};

template <class my_type> class Tree {
	node<my_type>* root;
public:
	Tree();
	node<my_type>* get_root();
	void copy_tree(node<my_type>*& root_new, node<my_type>* root_old);
	/* �������� ������ � ������ root_old � ������ � ������ root_new. � ���������� ������� ���������
	� ��������� �������� ������ */
	Tree(const Tree& ob); // ����������� �����������
	void del_tree(node<my_type>* vertex);
	/* ����������� �������, ������������ � �����������(������������ ������) */
	~Tree();
	void push(node<my_type>*& vertex, float data); // ������� �������� � ������
	void show(node<my_type>* vertex); // ����� ������ �� �����
	node<my_type>* find(node<my_type>* vertex, float key); // ����� �� �����
	void print_leaves(node<my_type>* vertex); // ����� ������� ������ �� �����
	int get_height(node<my_type>* vertex);
	node<my_type>* get_max(node<my_type>* vertex);
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
		vertex = new node<my_type>;
		vertex->info = data;
		vertex->left = 0;
		vertex->right = 0;
		vertex->count = 1;
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

#endif