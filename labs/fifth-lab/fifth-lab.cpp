// #include "text.h"
# include "annotation.h"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream f("star-wars.txt");
	string text;
	if (f.is_open()) {
		string temp;
		while (not f.eof()) {
			f >> temp;
			text += temp + " ";
		}
	}
	else {
		cout << "The file wasn't open.";
	}
	f.close();

	/*
	// for Text class testing
	Text star_wars;
	star_wars.set_language("English");
	star_wars.set_text(text);
	cout << "The lang is: " << star_wars.get_language() << endl;
	cout << "The text is: " << endl << star_wars.get_text() << endl;
	star_wars.vanish_text();
	cout << "The text after vanishing: " << endl << star_wars.get_text() << endl;
	star_wars.set_text("The text is about Star Wars movie!");
	cout << "The new text: " << endl << star_wars.get_text() << endl;*/

	// for Annotation class testing
	Annotation star_wars("Star Wars", "movie", text, "English", "Andrey Shpak", 21);
	star_wars.info();
}