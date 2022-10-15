#include "tree.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

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

void Tree::del_tree(node* wer) {
	if (wer->left != 0) {
		del_tree(wer->left);
	}
	if (wer->right != 0) {
		del_tree(wer->right);
	}
	delete wer;
}

