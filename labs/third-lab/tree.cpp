#include "tree.h"

Tree::Tree() {
	root = 0;
}

Tree::~Tree() {
	del_tree(root);
}

Tree::Tree(int t) {
	srand(time(NULL));
	root = 0;
	for (int i = 0; i < t; i++) {
		push(root, rand() % 10 - 5);
	}
}

void Tree::copy_tree(node*& root_new, node* root_old) {
	if (root_old->left != 0) {
push(root_new, (root_old->left)->info);
copy_tree(root_new, root_old->left);
	}
	if (root_old->right != 0) {
		push(root_new, (root_old->right)->info);
		copy_tree(root_new, root_old->right);
	}
}

Tree::Tree(const Tree& ob) {
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

void Tree::del_tree(node* vertex) {
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

void Tree::push(node*& vertex, int data) {
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

void Tree::show(node* vertex) {
	if (vertex != 0) {
		show(vertex->left);
		cout << "The value: " << vertex->info << " - " << vertex->count;
		cout << " pieces" << endl;
		show(vertex->right);
	}
}

node* Tree::find(node* vertex, int key) {
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

void Tree::print_leaves(node* vertex) {
	if (vertex == 0) {
		return;
	}
	else if ((vertex->left == 0) && (vertex->right == 0)) {
		cout << "The value: " << vertex->info << " - " << vertex->count;
		cout << " pieces" << endl;
	}
	else {
		print_leaves(vertex->left);
		print_leaves(vertex->right);
	}
}

int Tree::get_height(node* vertex) {
	if (vertex == 0) {
		return 0;
	}
	return 1 + max(get_height(vertex->left), get_height(vertex->right));
}

node Tree::get_max(node* vertex) {
	if (vertex->right == 0) {
		return *vertex;
	}
	else {
		return get_max(vertex->right);
	}
}