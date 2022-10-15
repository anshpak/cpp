// объявление класса и функций
// функции определяю в tvector.cpp
#ifndef BINARY_H // предотвращение многократного включения
#define BINARY_H // заголовочного файла
#include <iostream>
#include <string.h>

using namespace std;
/* #ifndef и #endif - директивы препроцессора, которые предотвращают многократное включение кода, расположенного между ними.
Если загловок еще не включался в файл, то имя TVECTOR-HEADER_H определяется директивой #define.
*/

#endif

struct node {
	int n; // информационное поле узла дерева
	int count;
	node* left, * right;
};

class Tree {
public:
	node* root;
	Tree();
	Tree(int t); // формирование дерева из t случайных чисел
	void copy_tree(node*& root_new, node* root_old);
	/* Копирует дерево с корнем root_old в дерево с корнем root_new. В результате деревья находятся
	в различных участках памяти */
	Tree(const Tree& ob); // конструктор копирования
	void del_tree(node* wer); 
	/* рекурсивная функция, используемая в деструкторе(освобождение памяти) */
	~Tree();
	void push(node*& wer, int data); // вставка элемента в дерево
	void show(node* wer); // вывод дерева на экран
	node* find(node* wer, int key); // поиск по ключу
	void print_leaves(node* wer); // вывод листьев дерева на экран
};