// ���������� ������ � �������
// ������� ��������� � house.cpp
#ifndef HOUSE-HEADER_H // �������������� ������������� ���������
#define HOUSE-HEADER_H // ������������� �����
/* #ifndef � #endif - ��������� �������������, ������� ������������� ������������ ��������� ����, �������������� ����� ����.
���� �������� ��� �� ��������� � ����, �� ��� HOUSE-HEADER_H ������������ ���������� #define.
*/

struct floor {
	int rooms_amount;
	int area;
};

class House {
	char address[30];
	int fl_num;
	floor fl;
};

#endif