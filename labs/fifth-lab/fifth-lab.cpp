#include "article.h"
#include "tree.h"
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{

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
	/*Annotation star_wars("Star Wars", "movie", text, "English", "Andrey Shpak", 21);
	star_wars.info();*/

	// for Article class testing
	/*Article star_wars("Star Wars", 7, "movie", text, "English", "Andrey Shpak", 21);
	star_wars.info();*/
	/*Tree<Article> tree;
	node<Article>* root = tree.get_root();
	tree.push(root, star_wars);*/
	const int N = 3;
	Article articles[N];
	articles[0] = Article("Star Wars", 7, "movie", "The caption of a movie", "English", "Andrey Shpak", 21);
	articles[1] = Article("Flowers", 12, "gardening", "Flowers of your garden", "French", "Alexandr Tomin", 21);
	articles[2] = Article("Birds of Europe", 30, "animals", "Rare animals of the whole Europe", "German", "Natalia Sim", 21);

	char ch = NULL;
	while (ch != 'q') {
		system("cls");
		for (int i = 0; i < N; i++) {
			articles[i].info();
			cout << "____________________________________________" << endl;
		}
		cout << "Choose the article" << endl;
		cout << "1" << endl;
		cout << "2" << endl;
		cout << "3" << endl;
		cin >> ch;
		switch (ch)
		{
		case '1': {
			system("cls");
			
			char ch_temp;
			cout << "Enter what to edit:" << endl;
			cin >> ch_temp;
			switch (ch_temp) {
			case '1': {
				string temp;
				cin >> temp;
				articles[0].edit_name(temp);
				break;
			}
			case'2': {
				float temp;
				cin >> temp;
				articles[0].edit_rating(temp);
				break;
			}
			case 3: {
				string temp;
				cin >> temp;
				articles[0].edit_theme(temp);
				break;
			}
			case 4: {
				string temp;
				cin >> temp;
				articles[0].edit_text(temp);
				break;
			}
			case 5: {
				string temp;
				cin >> temp;
				articles[0].edit_language(temp);
				break;
			}
			case 6: {
				string temp;
				cin >> temp;
				articles[0].edit_author(temp);
				break;
			}
			case 7: {
				int temp;
				cin >> temp;
				articles[0].edit_authors_age(temp);
				break;
			}
			default:
				break;
			}

			break;
		}
		case '2': {
			system("cls");
			
			char ch_temp;
			cout << "Enter what to edit:" << endl;
			cin >> ch_temp;
			switch (ch_temp) {
			case '1': {
				string temp;
				cin >> temp;
				articles[1].edit_name(temp);
				break;
			}
			case'2': {
				float temp;
				cin >> temp;
				articles[1].edit_rating(temp);
				break;
			}
			case 3: {
				string temp;
				cin >> temp;
				articles[1].edit_theme(temp);
				break;
			}
			case 4: {
				string temp;
				cin >> temp;
				articles[1].edit_text(temp);
				break;
			}
			case 5: {
				string temp;
				cin >> temp;
				articles[1].edit_language(temp);
				break;
			}
			case 6: {
				string temp;
				cin >> temp;
				articles[1].edit_author(temp);
				break;
			}
			case 7: {
				int temp;
				cin >> temp;
				articles[1].edit_authors_age(temp);
				break;
			}
			default:
				break;
			}

			break;
		}
		case '3': {
			system("cls");
			
			char ch_temp;
			cout << "Enter what to edit:" << endl;
			cin >> ch_temp;
			switch (ch_temp) {
			case '1': {
				string temp;
				cin >> temp;
				articles[2].edit_name(temp);
				break;
			}
			case'2': {
				float temp;
				cin >> temp;
				articles[2].edit_rating(temp);
				break;
			}
			case 3: {
				string temp;
				cin >> temp;
				articles[2].edit_theme(temp);
				break;
			}
			case 4: {
				string temp;
				cin >> temp;
				articles[2].edit_text(temp);
				break;
			}
			case 5: {
				string temp;
				cin >> temp;
				articles[2].edit_language(temp);
				break;
			}
			case 6: {
				string temp;
				cin >> temp;
				articles[2].edit_author(temp);
				break;
			}
			case 7: {
				int temp;
				cin >> temp;
				articles[2].edit_authors_age(temp);
				break;
			}
			default:
				break;
			}

			break;
		}
		default:
			break;
		}
	}

	/*ifstream f("articles.txt");
	string text;
	if (f.is_open()) {
		string temp_name;
		string temp_rating;
		string temp_text;
		string temp_theme;
		string temp_language;
		string temp_name;
		string temp_age;
		while (not f.eof()) {
			
		}
	}
	else {
		cout << "The file wasn't open.";
	}
	f.close();*/
}