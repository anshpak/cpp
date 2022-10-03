#include <iostream>
#include "tvector.h"
#include <string>
#include <stdlib.h>
#include <ctime>

int main() {
	srand(time(NULL));
	const int ARR_OF_VECTORS_SIZE = 10;
	Tvector vectors[ARR_OF_VECTORS_SIZE];
	
	// to check how the random vectors work
	/*for (int i = 0; i < N; i++) {
		vectors[i] = Tvector(to_string(i));
	}*/

	// direct input
	int a_values[vector_size] = { X, 0, 1, 0, X };
	int b_values[vector_size] = { 0, 0, X, 1, 1 };
	int c_values[vector_size] = { 1, 0, 1, 0, 1};
	int d_values[vector_size] = { X, 0, 1, 0, X };
	int my_vector_values[vector_size] = { 0, 0, X, X, X };
	int i_values[vector_size] = { 0, 0, 1, X, 1 };
	int j_values[vector_size] = { 1, 0, 0, 0, 0 };
	int k_values[vector_size] = { X, 0, 1, 0, X };
	int e_values[vector_size] = { 1, 1, X, 0, 1 };
	int f_values[vector_size] = { X, 0, 1, 0, X };
	vectors[0] = Tvector("A", a_values);
	vectors[1] = Tvector("B", b_values);
	vectors[2] = Tvector("C", c_values);
	vectors[3] = Tvector("D", d_values);
	vectors[4] = Tvector("V", my_vector_values);
	vectors[5] = Tvector("i", i_values);
	vectors[6] = Tvector("j", j_values);
	vectors[7] = Tvector("k", k_values);
	vectors[8] = Tvector("E", e_values);
	vectors[9] = Tvector("F", f_values);
	
	char ch = NULL;
	while (ch != 'q') {
		system("cls");
		show_menu();
		cin >> ch;
		switch (ch)
		{
		case '1': {
			system("cls");
			cout << "All the vectors: \n";
			for (int i = 0; i < ARR_OF_VECTORS_SIZE; i++) {
				cout << i + 1 << ". " << vectors[i];
			}
			cout << "Press any key or q to leave.\n";
			cin >> ch;
			break;
		}
		case '2': {
			system("cls");
			cout << "Compare two random vectors: \n";
			int j = rand() % 10;
			int k = rand() % 10;
			cout << "1. " << vectors[j];
			cout << "2. " << vectors[k];
			bool check = vectors[j] == vectors[k];
			cout << "Are these vectors equal?\n The answer is" << std::boolalpha << check << "\n";
			cout << "Press any key or q to leave.\n";
			cin >> ch;
			break;
		}
		default:
			break;
		}
	}
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