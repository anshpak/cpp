// объ€вление класса и функций
// функции определ€ю в tvector.cpp
#ifndef TVECTOR_H // предотвращение многократного включени€
#define TVECTOR_H // заголовочного файла
#include <iostream>
#include <string.h>
using namespace std;
/* #ifndef и #endif - директивы препроцессора, которые предотвращают многократное включение кода, расположенного между ними.
≈сли загловок еще не включалс€ в файл, то им€ HOUSE-HEADER_H определ€етс€ директивой #define.
*/
const X = 10;
const n = 3;
const vector_size = 5;

class Tvector {
	tset int[n] = {0, 1, X};

	public:
		Tvector();
};

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