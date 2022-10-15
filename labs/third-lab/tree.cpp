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