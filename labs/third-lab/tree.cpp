#include "tree.h"

Tree::Tree() {
	root = 0;
}

Tree::~Tree() {
	del_tree(root);
}