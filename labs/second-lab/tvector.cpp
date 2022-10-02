#include "tvector.h"
#include <iostream>
#include <ctime>
using namespace std;

int tset[n] = { 0, 1, X };

Tvector::Tvector() {
	set_name();
	set_values();
}

void Tvector::set_values() {
	srand(time(NULL));
	for (int i = 0; i < vector_size; i++) {
		values[i] = tset[rand() % 3];
	}
}

void Tvector::set_name() {
	name = "Unnamed vector";
}

void Tvector::show_vector() {
	cout << name << " = { ";
	for (int i = 0; i < vector_size; i++) {
		cout << values[i] << " ";
	}
	cout << "}";
}

//house::house() {
//	address = "";
//	fl_num = 0;
//	fl.rooms_amount = 0;
//	fl.area = 0;
//}
//
//house::house(string my_address, int my_fl_num, int my_rooms_amount, int my_area) {
//	set_address(my_address);
//	set_fl_num(my_fl_num);
//	set_rooms_amount(my_rooms_amount);
//	set_area(my_area);
//}
//
//void house::show() {
//	cout << "________________________________________" << endl;
//	cout << "the address is " << address << ";" << endl;
//	cout << "the current floor is " << fl_num << ";" << endl;
//	cout << "there are " << fl.rooms_amount << " rooms;" << endl;
//	cout << "the floor area is about " << fl.area << " square meters;" << endl;
//}
//
//void house::set_address(string my_address) {
//	address = my_address;
//}
//
//void house::set_fl_num(int my_fl_num) {
//	fl_num = my_fl_num;
//}
//
//void house::set_rooms_amount(int my_rooms_amount) {
//	fl.rooms_amount = my_rooms_amount;
//}
//
//void house::set_area(int my_area) {
//	fl.area = my_area;
//}
//
//string house::get_address() {
//	return address;
//}
//
//int house::get_fl_num() {
//	return fl_num;
//}
//
//int house::get_rooms_amount() {
//	return fl.rooms_amount;
//}
//
//int house::get_area() {
//	return fl.area;
//}
//
//void show_stages_with_n_rooms(house flats[], const int n, int my_rooms_amount) {
//	int temp;
//	bool flag = false;
//	for (int i = 1; i < n; i++) {
//		temp = flats[i].get_rooms_amount();
//		if (temp == my_rooms_amount) {
//			cout << flats[i].get_address() << endl;
//			flag = true;
//		}
//	}
//	if (!flag) {
//		cout << "none" << endl;
//	}
//}
//
//void show_stages_with_n_rooms_from_inter(house flats[], const int a, const int b, int my_rooms_amount) {
//	int temp;
//	bool flag = false;
//	for (int i = a - 1; i < b; i++) {
//		temp = flats[i].get_rooms_amount();
//		if (temp == my_rooms_amount) {
//			cout << flats[i].get_address() << endl;
//			flag = true;
//		}
//	}
//	if (!flag) {
//		cout << "none" << endl;
//	}
//}
//
//void show_stages_with_area_more_than(house flats[], const int n, int my_area) {
//	int temp;
//	bool flag = false;
//	for (int i = 0; i < n; i++) {
//		temp = flats[i].get_area();
//		if (temp > my_area) {
//			cout << flats[i].get_address() << endl;
//			flag = true;
//		}
//	}
//	if (!flag) {
//		cout << "none" << endl;
//	}
//}