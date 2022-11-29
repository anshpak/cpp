#ifndef ANNOTATION_H
#define ANNOTATION_H
#include "text.h"
#include <iostream>
#include <string.h>

using namespace std;

class Annotation : public Text {
	string name;
	string theme;
	string author;
	int authors_age;
public:
	Annotation(string name, string theme, string text, string language, string author, int age);
	void set_name(string name);
	void set_theme(string theme);
	void set_author(string author);
	void set_authors_age(int age);
	string get_name();
	string get_theme();
	string get_author();
	int get_authors_age();
	void vanish_text();
};

#endif