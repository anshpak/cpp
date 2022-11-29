#include "annotation.h"
#include <iostream>
#include <string>

Annotation::Annotation(string name, string theme, string text, string language, string author, int age) {
	this->set_name(name);
	this->set_theme(theme);
	this->set_text(text);
	this->set_language(language);
	this->set_author(author);
	this->set_authors_age(age);
}

void Annotation::set_name(string name) {
	this->name = name;
}

void Annotation::set_theme(string theme) {
	this->theme = theme;
}

void Annotation::set_author(string author) {
	this->author = author;
}

void Annotation::set_authors_age(int age) {
	this->authors_age = age;
}

string Annotation::get_name() {
	return this->name;
}

string Annotation::get_theme() {
	return this->theme;
}

string Annotation::get_author() {
	return this->author;
}

int Annotation::get_authors_age() {
	return this->authors_age;
}

void Annotation::vanish_text() {
	this->set_text("");
	// Also could be done through protected
}

void Annotation::info() {
	cout << this->get_name() << "." << endl;
	cout << "The theme of the article: " << this->get_theme() << " in " << this->get_language() << " language." << endl;
	cout << this->get_text() << endl;
	cout << "By " << this->get_author() << ", " << this->get_authors_age() << " years old." << endl;
}