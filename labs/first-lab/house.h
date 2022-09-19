// объ€вление класса и функций
// функции определ€ю в house.cpp
#ifndef HOUSE_H // предотвращение многократного включени€
#define HOUSE_H // заголовочного файла
#include <iostream>
#include <string.h>
using namespace std;
/* #ifndef и #endif - директивы препроцессора, которые предотвращают многократное включение кода, расположенного между ними.
≈сли загловок еще не включалс€ в файл, то им€ HOUSE-HEADER_H определ€етс€ директивой #define.
*/

struct stage {
	int rooms_amount;
	int area;
};

class House {
	string address;
	int fl_num;
	stage fl;
public:
	House(string my_address, int my_fl_num, int my_rooms_amount, int my_area);
	void show();
	void set_address(string my_address);
	void set_fl_num(int my_fl_num);
	void set_rooms_amount(int my_rooms_amount);
	void set_area(int my_area);
	string get_address();
	int get_fl_num();
	int get_rooms_amount();
	int get_area();
};
#endif