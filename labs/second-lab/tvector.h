// ���������� ������ � �������
// ������� ��������� � tvector.cpp
#ifndef TVECTOR_H // �������������� ������������� ���������
#define TVECTOR_H // ������������� �����
#include <iostream>
#include <string.h>

using namespace std;
/* #ifndef � #endif - ��������� �������������, ������� ������������� ������������ ��������� ����, �������������� ����� ����.
���� �������� ��� �� ��������� � ����, �� ��� TVECTOR-HEADER_H ������������ ���������� #define.
*/
const int X = 9;
const int n = 3;
const int vector_size = 5;

class Tvector {
	int values[vector_size];
	string name;
public:
	Tvector(string name = "Unnamed vector");
	Tvector(string name, int values[]);
	void set_values(int values[]);
	void set_random_values();
	void set_name(string name);
	void get_values(int arr_for_values_copy[]);
	string get_name();
	void show_vector();
	int get_X_amount();
	Tvector operator=(const Tvector& vector);
	friend bool operator==(const Tvector& left_vector, const Tvector& right_vector);
	friend bool operator*(const Tvector& left_vector, const Tvector& right_vector);
	friend string operator/(const Tvector& left_vector, const Tvector& right_vector);
	friend ostream& operator<<(ostream& os, const Tvector& vector);
};

bool are_orthogonal(Tvector v1, Tvector v2);
bool are_equal(Tvector v1, Tvector v2);
void show_vectors_intersection(Tvector v1, Tvector v2);
void show_menu();
#endif