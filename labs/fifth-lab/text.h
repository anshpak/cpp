#ifndef TEXT_H
#define TEXT_H
#include <iostream>
#include <string.h>

using namespace std;

class Text {
	string text;
	string language;
public:
	void set_text(string text);
	void set_language(string language);
	string get_text();
	string get_language();
	void vanish_text();
};

#endif