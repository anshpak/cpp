// first-lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "tvector.h"
#include <string>

int main() {
	Tvector a;
	a.show_vector();
	Tvector b;
	b.show_vector();
	bool check = are_orthogonal(a, b);
	cout << std::boolalpha << check;
	cout << "_________________\n";
	check = are_equal(a, b);
	cout << std::boolalpha << check;
}

//int main()
//{
//    srand(time(NULL));
//    const int house_flats_amount = 10;
//    const string house_address = "Oktyabrskaya/" + (to_string(rand() % 9 + 1) + "/");
//    const int rooms = 4;
//    const int a = 8;
//    const int b = 10;
//    const int area = 70;
//
//    House flats[house_flats_amount];
//    for (int i = 0; i < house_flats_amount; i++) {
//        flats[i] = House(house_address + to_string(i + 1), i + 1, rand() % 10 + 1, rand() % 100 + 20);
//    }
//    for (int i = 0; i < house_flats_amount; i++) {
//        // cout << i << endl;
//        flats[i].show();
//    }
//
//    cout << endl << "The " << rooms << " room stages are: " << endl;
//    show_stages_with_N_rooms(flats, house_flats_amount, rooms);
//
//    // наверное, подразусевается, что промежуток не выодит за рамки этажей
//    cout << endl << "The " << rooms << " room stages from interval [" << a << ", " << b << "] are: " << endl;
//    show_stages_with_N_rooms_from_inter(flats, a, b, rooms);
//
//    cout << endl << "Stages with area more than " << area << ":" << endl;
//    show_stages_with_area_more_than(flats, house_flats_amount, area);
//
//    /*House h = House("Armeyskaya/21", 4, 3, 50);
//    cout << h.get_address() << endl;
//    cout << h.get_fl_num() << endl;
//    cout << h.get_rooms_amount() << endl;
//    cout << h.get_area() << endl;
//    h.show();
//    */
//}