#ifndef ARTICLE_H
#define ARTICLE_H
#include "annotation.h"
#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;

class Article : public Annotation {
	tm* ltm;
	float rating;
public:
	Article(string name, float rating, string theme, string text, string language, string author, int age);
	void set_rating(float rating);
	float get_rating();
	void info();
};

#endif