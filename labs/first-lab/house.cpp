#include "house.h"
#include <iostream>
using namespace std;

House::House() {
	address = "Armeyskaya/21";
	fl_num = 4;
	fl.rooms_amount = 3;
	fl.area = 50;
}

void House:: show() {
	cout << "The address is " << address << ";" << endl;
	cout << "The house floor is " << fl_num << ";" << endl;
	cout << "There are " << fl.rooms_amount << " rooms;" << endl;
	cout << "The floor area is about " << fl.area << " square meters;";
}