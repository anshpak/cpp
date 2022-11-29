#include "article.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

Article::Article(string name, float rating, string theme, string text, string language, string author, int age):Annotation(name, theme, text, language, author, age) {
	this->set_name(name);
	this->set_rating(rating);
	this->set_theme(theme);
	this->set_text(text);
	this->set_language(language);
	this->set_author(author);
	this->set_authors_age(age);
	// current date/time based on current system
	time_t now = time(0);
	this->ltm = localtime(&now);
}

void Article::set_rating(float rating) {
	this->rating = rating;
}

float Article::get_rating() {
	return this->rating;
}

void Article::info() {
	cout << this->get_name() << "." << endl;
	cout << "Rating: " << this->get_rating() << "." << endl;
	cout << "The theme of the article: " << this->get_theme() << " in " << this->get_language() << " language." << endl;
	cout << this->get_text() << endl;
	cout << "By " << this->get_author() << ", " << this->get_authors_age() << " years old." << endl;
	cout << "Year: " << 1900 + this->ltm->tm_year << endl;
	cout << "Month: " << 1 + this->ltm->tm_mon << endl;
	cout << "Day: " << this->ltm->tm_mday << endl;
	cout << "Time: " << this->ltm->tm_hour << ":";
	cout << this->ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;
}