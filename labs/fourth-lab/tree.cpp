#include "tree.h"
#include <fstream>

template <class my_type>
Tree<my_type>::Tree() {
	root = 0;
}

template <class my_type>
Tree<my_type>::~Tree() {
	del_tree(root);
}

template <class my_type>
node<my_type>* Tree<my_type>::get_root() {
	return root;
}

template<class my_type>
void Tree<my_type>::copy_tree(node<my_type>*& root_new, node<my_type>* root_old) {
	if (root_old->left != 0) {
		push(root_new, (root_old->left)->info);
		copy_tree(root_new, root_old->left);
	}
	if (root_old->right != 0) {
		push(root_new, (root_old->right)->info);
		copy_tree(root_new, root_old->right);
	}
}

template <class my_type>
Tree<my_type>::Tree(const Tree& ob) {
	if (ob.root == 0) {
		root = 0;
	}
	else {
		root = new node;
		root->info = ob.root->info;
		root->count = 1;
		root->left = 0;
		root->right = 0;
		copy_tree(root, ob.root);
	}
}

template <class my_type>
void Tree<my_type>::del_tree(node<my_type>* vertex) {
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

template <class my_type>
void Tree<my_type>::push(node<my_type>*& vertex, my_type data) {
	if (vertex == 0) {
		vertex = new node;
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

template <class my_type>
void Tree<my_type>::show(node<my_type>* vertex) {
	if (vertex != 0) {
		show(vertex->left);
		print_node(vertex);
		show(vertex->right);
	}
}

template <class my_type>
node<my_type>* Tree<my_type>::find(node<my_type>* vertex, my_type key) {
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

template <class my_type>
void Tree<my_type>::print_leaves(node<my_type>* vertex) {
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

template <class my_type>
int Tree<my_type>::get_height(node<my_type>* vertex) {
	if (vertex == 0) {
		return 0;
	}
	return 1 + max(get_height(vertex->left), get_height(vertex->right));
}

template <class my_type>
node<my_type>* Tree<my_type>::get_max(node<my_type>* vertex) {
	if (vertex->right == 0) {
		return vertex;
	}
	else {
		return get_max(vertex->right);
	}
}

template <class my_type>
void Tree<my_type>::print_node(node<my_type>* vertex) {
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