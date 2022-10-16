// объявление класса и функций
// функции определяю в tvector.cpp
#ifndef TREE_H // предотвращение многократного включения
#define TREE_H // заголовочного файла
#include <iostream>
#include <string.h>

using namespace std;
/* #ifndef и #endif - директивы препроцессора, которые предотвращают многократное включение кода, расположенного между ними.
Если загловок еще не включался в файл, то имя TVECTOR-HEADER_H определяется директивой #define.
*/

struct node {
	float info; // информационное поле узла дерева
	int count;
	node* left, * right;
};

class Tree {
public:
	node* root;
	Tree();
	//Tree(int t); // формирование дерева из t случайных чисел
	void copy_tree(node*& root_new, node* root_old);
	/* Копирует дерево с корнем root_old в дерево с корнем root_new. В результате деревья находятся
	в различных участках памяти */
	Tree(const Tree& ob); // конструктор копирования
	void del_tree(node* vertex); 
	/* рекурсивная функция, используемая в деструкторе(освобождение памяти) */
	~Tree();
	void push(node*& vertex, float data); // вставка элемента в дерево
	void show(node* vertex); // вывод дерева на экран
	node* find(node* vertex, float key); // поиск по ключу
	void print_leaves(node* vertex); // вывод листьев дерева на экран
	int get_height(node* vertex);
	node* get_max(node* vertex);
};

void print_node(node* vertex);
void show_menu();
#endif