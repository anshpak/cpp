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

struct node {
	float info; // �������������� ���� ���� ������
	int count;
	node* left, * right;
};

class Tree {
public:
	node* root;
	Tree();
	//Tree(int t); // ������������ ������ �� t ��������� �����
	void copy_tree(node*& root_new, node* root_old);
	/* �������� ������ � ������ root_old � ������ � ������ root_new. � ���������� ������� ���������
	� ��������� �������� ������ */
	Tree(const Tree& ob); // ����������� �����������
	void del_tree(node* vertex); 
	/* ����������� �������, ������������ � �����������(������������ ������) */
	~Tree();
	void push(node*& vertex, float data); // ������� �������� � ������
	void show(node* vertex); // ����� ������ �� �����
	node* find(node* vertex, float key); // ����� �� �����
	void print_leaves(node* vertex); // ����� ������� ������ �� �����
	int get_height(node* vertex);
	node* get_max(node* vertex);
};

void print_node(node* vertex);
void show_menu();
#endif