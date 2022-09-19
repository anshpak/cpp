// ���������� ������ � �������
// ������� ��������� � house.cpp
#ifndef HOUSE_H // �������������� ������������� ���������
#define HOUSE_H // ������������� �����
#include <iostream>
#include <string.h>
using namespace std;
/* #ifndef � #endif - ��������� �������������, ������� ������������� ������������ ��������� ����, �������������� ����� ����.
���� �������� ��� �� ��������� � ����, �� ��� HOUSE-HEADER_H ������������ ���������� #define.
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
	House();
	void show();
	void set_address(string my_address);
	void set_fl_num(int my_fl_num);
	void set_rooms_amount(int my_rooms_amount);
	void set_area(int my_area);
};
#endif