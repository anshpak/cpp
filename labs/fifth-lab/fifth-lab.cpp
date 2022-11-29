#include "article.h"
#include "tree.h"
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	const int N = 3;
	Article articles[N];
	articles[0] = Article("Star Wars", 7, "movie", "The caption of a movie", "English", "Andrey Shpak", 21);
	articles[1] = Article("Flowers", 12, "gardening", "Flowers of your garden", "French", "Alexandr Tomin", 51);
	articles[2] = Article("Birds of Europe", 30, "animals", "Rare animals of the whole Europe", "German", "Natalia Sim", 33);

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
			show_what_to_edit();
			char ch_temp;
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
			case '3': {
				string temp;
				cin >> temp;
				articles[0].edit_theme(temp);
				break;
			}
			case '4': {
				string temp;
				cin >> temp;
				articles[0].edit_text(temp);
				break;
			}
			case '5': {
				string temp;
				cin >> temp;
				articles[0].edit_language(temp);
				break;
			}
			case '6': {
				string temp;
				cin >> temp;
				articles[0].edit_author(temp);
				break;
			}
			case '7': {
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
			show_what_to_edit();
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
			case '2': {
				float temp;
				cin >> temp;
				articles[1].edit_rating(temp);
				break;
			}
			case '3': {
				string temp;
				cin >> temp;
				articles[1].edit_theme(temp);
				break;
			}
			case '4': {
				string temp;
				cin >> temp;
				articles[1].edit_text(temp);
				break;
			}
			case '5': {
				string temp;
				cin >> temp;
				articles[1].edit_language(temp);
				break;
			}
			case '6': {
				string temp;
				cin >> temp;
				articles[1].edit_author(temp);
				break;
			}
			case '7': {
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
			show_what_to_edit();
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
			case '2': {
				float temp;
				cin >> temp;
				articles[2].edit_rating(temp);
				break;
			}
			case '3': {
				string temp;
				cin >> temp;
				articles[2].edit_theme(temp);
				break;
			}
			case '4': {
				string temp;
				cin >> temp;
				articles[2].edit_text(temp);
				break;
			}
			case '5': {
				string temp;
				cin >> temp;
				articles[2].edit_language(temp);
				break;
			}
			case '6': {
				string temp;
				cin >> temp;
				articles[2].edit_author(temp);
				break;
			}
			case '7': {
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
}