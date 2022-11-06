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

template <class my_type>
struct node {
	my_type info; // �������������� ���� ���� ������
	int count;
	node* left, * right;
};

template <class my_type> class Tree {
private:
	node* root;
public:
	Tree();
	node* get_root();
	void copy_tree(node*& root_new, node* root_old);
	/* �������� ������ � ������ root_old � ������ � ������ root_new. � ���������� ������� ���������
	� ��������� �������� ������ */
	Tree(const Tree& ob); // ����������� �����������
	void del_tree(node* vertex);
	/* ����������� �������, ������������ � �����������(������������ ������) */
	~Tree();
	void push(node*& vertex, my_type data); // ������� �������� � ������
	void show(node* vertex); // ����� ������ �� �����
	node* find(node* vertex, my_type key); // ����� �� �����
	void print_leaves(node* vertex); // ����� ������� ������ �� �����
	int get_height(node* vertex);
	node* get_max(node* vertex);
	void print_node(node* vertex);
};

void show_menu();
#endif