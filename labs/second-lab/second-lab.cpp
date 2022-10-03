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
				cout << i + 1 << ". " << vectors[i] << "\n";
			}
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '2': {
			system("cls");
			cout << "Compare two random vectors: \n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			int k = rand() % ARR_OF_VECTORS_SIZE;
			cout << "1. " << vectors[j] << "\n";
			cout << "2. " << vectors[k] << "\n";
			bool check = vectors[j] == vectors[k];
			cout << "Are these two vectors equal?\nThe answer is " << std::boolalpha << check << ".\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '3': {
			system("cls");
			cout << "Check if two random vectors are orthogonal: \n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			int k = rand() % ARR_OF_VECTORS_SIZE;
			cout << "1. " << vectors[j] << "\n";
			cout << "2. " << vectors[k] << "\n";
			bool check = vectors[j] * vectors[k];
			cout << "Are these two vectors orthogonal?\nThe answer is " << std::boolalpha << check << ".\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '4': {
			system("cls");
			cout << "Show the intersection of two random non orthogonal vectors: \n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			int k = rand() % ARR_OF_VECTORS_SIZE;
			while (vectors[j] * vectors[k]) {
				j = rand() % ARR_OF_VECTORS_SIZE;
				k = rand() % ARR_OF_VECTORS_SIZE;
			}
			cout << "1. " << vectors[j] << "\n";
			cout << "2. " << vectors[k] << "\n";
			cout << "The intersection looks like that: " << vectors[j] / vectors[k];
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		case '5': {
			system("cls");
			cout << "Show how many times " << X << " appears in random vector;\n";
			int j = rand() % ARR_OF_VECTORS_SIZE;
			cout << "The value " << X << " appears " << vectors[j].get_X_amount() << " times in vector " << vectors[j] << "\n";
			cout << "Press any key to back to the menu or q to leave.\n";
			cin >> ch;
			break;
		}
		default:
			break;
		}
	}
}