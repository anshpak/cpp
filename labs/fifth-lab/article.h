#ifndef ARTICLE_H
#define ARTICLE_H
#include "annotation.h"
#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;

class Article : public Annotation {
	tm* ltm;
	string ed_time;
	float rating;
public:
	Article();
	Article(string name, float rating, string theme, string text, string language, string author, int age);
	void set_rating(float rating);
	float get_rating();
	void edit_name(string name);
	void edit_rating(float rating);
	void edit_theme(string theme);
	void edit_text(string text);
	void edit_language(string language);
	void edit_author(string author);
	void edit_authors_age(int age);
	void info() override;
};

#endif