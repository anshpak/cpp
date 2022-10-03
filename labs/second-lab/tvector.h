// объ€вление класса и функций
// функции определ€ю в tvector.cpp
#ifndef TVECTOR_H // предотвращение многократного включени€
#define TVECTOR_H // заголовочного файла
#include <iostream>
#include <string.h>

using namespace std;
/* #ifndef и #endif - директивы препроцессора, которые предотвращают многократное включение кода, расположенного между ними.
≈сли загловок еще не включалс€ в файл, то им€ TVECTOR-HEADER_H определ€етс€ директивой #define.
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
	friend bool operator==(const Tvector& left_vector, const Tvector& right_vector);
	friend bool operator*(const Tvector& left_vector, const Tvector& right_vector);
	friend ostream& operator<<(ostream& os, const Tvector& vector);
};

bool are_orthogonal(Tvector v1, Tvector v2);
bool are_equal(Tvector v1, Tvector v2);
void show_vectors_intersection(Tvector v1, Tvector v2);
void show_menu();

//struct stage {
//	int rooms_amount;
//	int area;
//};
//
//class House {
//	string address;
//	int fl_num;
//	stage fl;
//public:
//	House();
//	House(string my_address, int my_fl_num, int my_rooms_amount, int my_area);
//	void show();
//	void set_address(string my_address);
//	void set_fl_num(int my_fl_num);
//	void set_rooms_amount(int my_rooms_amount);
//	void set_area(int my_area);
//	string get_address();
//	int get_fl_num();
//	int get_rooms_amount();
//	int get_area();
//};
//
//void show_stages_with_N_rooms(House flats[], const int N, int my_rooms_amount);
//void show_stages_with_N_rooms_from_inter(House flats[], const int a, const int b, int my_rooms_amount);
//void show_stages_with_area_more_than(House flats[], const int N, int my_area);

#endif