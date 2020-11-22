#include <iostream>
#include <string>
using namespace std;

int main() {
	int year; 
	string animal, colour;
	cin >> year; 
	year = year % 60;
	switch ((year-3)%12) {
		case 1:
			animal = "крысы";
			break;
		case 2:
			animal = "коровы";
			break;
		case 3:
			animal = "тигра";
			break;
		case 4:
			animal = "зайца";
			break;
		case 5:
			animal = "дракона";
			break;
		case 6:
			animal = "змеи";
			break;
		case 7:
			animal = "лошади";
			break;
		case 8:
			animal = "овцы";
			break;
		case 9:
			animal = "обезьяны";
			break;
		case 10:
			animal = "курицы";
			break;
		case 11:
			animal = "собаки";
			break;
		case 0:
			animal = "свиньи";
			break;

	}

	if ((animal == "тигра") or (animal == "зайца") or (animal == "дракона")) {
		switch (year / 12) {
			case 0:
				colour = "голубого";
				break;
			case 1: 
				colour = "красного";
				break;
			case 2:
				colour = "желтого";
				break;
			case 3:
				colour = "белого";
				break;
			case 4:
				colour = "черного";
				break;

		}
	}
	else {
		switch (year / 12) {
			case 0:
				colour = "голубой";
				break;
			case 1: 
				colour = "красной";
				break;
			case 2:
				colour = "желтой";
				break;
			case 3:
				colour = "белой";
				break;
			case 4:
				colour = "черной";
				break;

		}
	}

	cout << "Год " << colour << ' ' << animal;
}