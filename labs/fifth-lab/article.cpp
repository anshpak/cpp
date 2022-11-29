#include "article.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

Article::Article():Annotation() {

}

Article::Article(string name, float rating, string theme, string text, string language, string author, int age):Annotation(name, theme, text, language, author, age) {
	this->set_name(name);
	this->set_rating(rating);
	this->set_theme(theme);
	this->set_text(text);
	this->set_language(language);
	this->set_author(author);
	this->set_authors_age(age);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
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
	cout << ed_time << endl;
}

void Article::edit_name(string name) {
	this->set_name(name);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
}

void Article::edit_rating(float rating) {
	this->set_rating(rating);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
}

void Article::edit_theme(string theme) {
	this->set_theme(theme);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
}

void Article::edit_text(string text) {
	this->set_text(text);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
}

void Article::edit_language(string language) {
	this->set_language(language);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
}

void Article::edit_author(string author) {
	this->set_author(author);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
}

void Article::edit_authors_age(int age) {
	this->set_authors_age(age);
	time_t now = time(0);
	this->ltm = localtime(&now);
	ed_time = to_string(this->ltm->tm_mday) + "." + to_string(this->ltm->tm_mon + 1) + " " + to_string(this->ltm->tm_hour) + ":" + to_string(this->ltm->tm_min) + ":" + to_string(this->ltm->tm_sec);
}