#include "tvector.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int tset[n] = { 0, 1, X };

Tvector::Tvector(string name) {
	set_name(name);
	set_random_values();
}

Tvector::Tvector(string name, int values[]) {
	set_name(name);
	set_values(values);
}

void Tvector::set_random_values() {
	srand(time(NULL));
	for (int i = 0; i < vector_size; i++) {
		values[i] = tset[rand() % 3];
	}
}

void Tvector::set_values(int values[]) {
	for (int i = 0; i < vector_size; i++) {
		this->values[i] = values[i];
	}
}

void Tvector::set_name(string name) {
	this->name = name;
}

void Tvector::get_values(int arr_for_values_copy[]) {
	for (int i = 0; i < vector_size; i++) {
		arr_for_values_copy[i] = this->values[i];
	}
}

string Tvector::get_name() {
	return name;
}

int Tvector::get_X_amount() {
	int count = 0;
	for (int i = 0; i < vector_size; i++) {
		if (values[i] == X) {
			count++;
		}
	}
	return count;
}

// this method has an analogue in the form of overloaded << operation
void Tvector::show_vector() {
	cout << name << " = { ";
	for (int i = 0; i < vector_size; i++) {
		cout << values[i] << " ";
	}
	cout << "}\n";
}

// this method has an analogue in the form of overloaded * operation
bool are_orthogonal(Tvector v1, Tvector v2) {
	int v1_values[vector_size], v2_values[vector_size];
	v1.get_values(v1_values);
	v2.get_values(v2_values);
	for (int i = 0; i < vector_size; i++) {
		if (v1_values[i] == 1 && v2_values[i] == 1 || v1_values[i] == X && v2_values[i] == X || v1_values[i] == X && v2_values[i] == 1 || v1_values[i] == 1 && v2_values[i] == X) {
			return false;
		}
	}
	return true;
}

// this method has an analogue in the form of overloaded == operation
bool are_equal(Tvector v1, Tvector v2) {
	int v1_values[vector_size], v2_values[vector_size];
	v1.get_values(v1_values);
	v2.get_values(v2_values);
	for (int i = 0; i < vector_size; i++) {
		if (v1_values[i] != v2_values[i]) {
			return false;
		}
	}
	return true;
}

// this method has an analogue with a new realization in the form of overloaded / operation
void show_vectors_intersection(Tvector v1, Tvector v2) {
	int v1_values[vector_size], v2_values[vector_size];
	v1.get_values(v1_values);
	v2.get_values(v2_values);
	for (int i = 0; i < vector_size; i++) {
		if (v1_values[i] == 1 && v2_values[i] == 1 || v1_values[i] == X && v2_values[i] == 1 || v1_values[i] == 1 && v2_values[i] == X) {
			cout << "1 ";
		}
		else if (v1_values[i] == X && v2_values[i] == X) {
			cout << X << " ";
		}
		else {
			cout << "0 ";
		}
	}
	cout << "\n";
}

bool operator==(const Tvector& left_vector, const Tvector& right_vector) {
	for (int i = 0; i < vector_size; i++) {
		if (left_vector.values[i] != right_vector.values[i]) {
			return false;
		}
	}
	return true;
}

bool operator*(const Tvector& left_vector, const Tvector& right_vector) {
	for (int i = 0; i < vector_size; i++) {
		if (left_vector.values[i] == 1 && right_vector.values[i] == 1 || left_vector.values[i] == X && right_vector.values[i] == X || left_vector.values[i] == X && right_vector.values[i] == 1 || left_vector.values[i] == 1 && right_vector.values[i] == X) {
			return false;
		}
	}
	return true;
}

Tvector Tvector::operator=(const Tvector& vector) {
	name = vector.name;
	for (int i = 0; i < vector_size; i++) {
		values[i] = vector.values[i];
	}
	return *this;
}

string operator/(const Tvector& left_vector, const Tvector& right_vector) {
	string res = "{ ";
	for (int i = 0; i < vector_size; i++) {
		if (left_vector.values[i] == 1 && right_vector.values[i] == 1 || left_vector.values[i] == X && right_vector.values[i] == 1 || left_vector.values[i] == 1 && right_vector.values[i] == X) {
			res += "1 ";
		}
		else if (left_vector.values[i] == X && right_vector.values[i] == X) {
			res += to_string(X);
			res += " ";
		}
		else {
			res += "0 ";
		}
	}
	res += "}\n";
	return res;
}



ostream& operator<<(ostream& os, const Tvector& vector) {
	os << vector.name << " = { ";
	for (int i = 0; i < vector_size; i++) {
		os << vector.values[i] << " ";
	}
	os << "}";
	return os;
}

void show_menu() {
	cout << "Press:\n"; 
	cout << "1 - to output all vectors;\n";
	cout << "2 - to compare two random vectors;\n";
	cout << "3 - to check if two random vectors are orthogonal;\n";
	cout << "4 - to show the intersection of two random non orthogonal vectors;\n";
	cout << "5 - to show how many times " << X << " appears in random vector;\n";
	cout << "q - to quit.\n";
}