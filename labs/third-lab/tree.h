// ���������� ������ � �������
// ������� ��������� � tvector.cpp
#ifndef BINARY_H // �������������� ������������� ���������
#define BINARY_H // ������������� �����
#include <iostream>
#include <string.h>

using namespace std;
/* #ifndef � #endif - ��������� �������������, ������� ������������� ������������ ��������� ����, �������������� ����� ����.
���� �������� ��� �� ��������� � ����, �� ��� TVECTOR-HEADER_H ������������ ���������� #define.
*/

#endif

struct node {
	int n; // �������������� ���� ���� ������
	int count;
	node* left, * right;
};

class Tree {
public:
	node* root;
	Tree();
	Tree(int t); // ������������ ������ �� t ��������� �����
	void copy_tree(node*& root_new, node* root_old);
	/* �������� ������ � ������ root_old � ������ � ������ root_new. � ���������� ������� ���������
	� ��������� �������� ������ */
	Tree(const Tree& ob); // ����������� �����������
	void del_tree(node* wer); 
	/* ����������� �������, ������������ � �����������(������������ ������) */
	~Tree();
};