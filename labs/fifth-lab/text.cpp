#include "text.h"
#include <iostream>
#include <string>

using namespace std;

void Text::set_text(string text) {
	this->text = text;
}

void Text::set_language(string language) {
	this->language = language;
}

string Text::get_text() {
	return this->text;
}

string Text::get_language() {
	return this->language;
}

void Text::vanish_text() {
	this->text = "";
}

void Text::info() {
	cout << "The article language is" << this->get_language() << "." << endl;
	cout << this->get_text() << endl;
}