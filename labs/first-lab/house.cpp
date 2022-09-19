#include "house.h"
#include <iostream>
using namespace std;

House::House(string my_address, int my_fl_num, int my_rooms_amount, int my_area) {
	set_address(my_address);
	set_fl_num(my_fl_num);
	set_rooms_amount(my_rooms_amount);
	set_area(my_area);
}

void House:: show() {
	cout << "The address is " << address << ";" << endl;
	cout << "The house floor is " << fl_num << ";" << endl;
	cout << "There are " << fl.rooms_amount << " rooms;" << endl;
	cout << "The floor area is about " << fl.area << " square meters;";
}

void House::set_address(string my_address) {
	address = my_address;
}

void House::set_fl_num(int my_fl_num) {
	fl_num = my_fl_num;
}

void House::set_rooms_amount(int my_rooms_amount) {
	fl.rooms_amount = my_rooms_amount;
}

void House::set_area(int my_area) {
	fl.area = my_area;
}

string House::get_address() {
	return address;
}

int House::get_fl_num() {
	return fl_num;
}

int House::get_rooms_amount() {
	return fl.rooms_amount;
}

int House::get_area() {
	return fl.area;
}

