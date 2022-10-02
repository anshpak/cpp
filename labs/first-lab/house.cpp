#include "house.h"
#include <iostream>
using namespace std;

House::House() {
	address = "";
	fl_num = 0;
	fl.rooms_amount = 0;
	fl.area = 0;
}

House::House(string my_address, int my_fl_num, int my_rooms_amount, int my_area) {
	set_address(my_address);
	set_fl_num(my_fl_num);
	set_rooms_amount(my_rooms_amount);
	set_area(my_area);
}

void House:: show() {
	cout << "________________________________________" << endl;
	cout << "The address is " << address << ";" << endl;
	cout << "The current floor is " << fl_num << ";" << endl;
	cout << "There are " << fl.rooms_amount << " rooms;" << endl;
	cout << "The floor area is about " << fl.area << " square meters;" << endl;
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

void show_stages_with_N_rooms(House flats[], const int N, int my_rooms_amount) {
	int temp;
	bool flag = false;
	for (int i = 1; i < N; i++) {
		temp = flats[i].get_rooms_amount();
		if (temp == my_rooms_amount) {
			cout << flats[i].get_address() << endl;
			flag = true;
		}
	}
	if (!flag){
		cout << "None" << endl;
	}
}

void show_stages_with_N_rooms_from_inter(House flats[], const int a, const int b, int my_rooms_amount) {
	int temp;
	bool flag = false;
	for (int i = a - 1; i < b; i++) {
		temp = flats[i].get_rooms_amount();
		if (temp == my_rooms_amount) {
			cout << flats[i].get_address() << endl;
			flag = true;
		}
	}
	if (!flag) {
		cout << "None" << endl;
	}
}

void show_stages_with_area_more_than(House flats[], const int N, int my_area) {
	int temp;
	bool flag = false;
	for (int i = 0; i < N; i++) {
		temp = flats[i].get_area();
		if (temp > my_area) {
			cout << flats[i].get_address() << endl;
			flag = true;
		}
	}
	if (!flag) {
		cout << "None" << endl;
	}
}