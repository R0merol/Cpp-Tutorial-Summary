#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//call methods
void pointers();
void comments();
void _2dArrays();
int power(int baseNum, int powNum);
void guessGame();
void doWhile(int test);
string getDayOfWeek(int dayNum);
void calculator();
void conditions();
double cube(double num);
void bababooey(string name);
void arrays();
void madlibs();
void userinput();
void multiply();

//classes
class Book {
public:
	string title;
	string author;
	int pages;

	Book(string _title, string _author, int _pages) {
		title = _title;
		author = _author;
		pages = _pages;
	}
	Book() {
        title = "Default";
        author = "Dance";
        pages = 69;
    }

	void History() {
		cout << author << " was the one who wrote " << title << " book";
	}

}; // don't forget this ';' for classes for some reason

class Games {
private:
	string rating;

public:
	string name;
	string developer;

	Games(string _name, string _developer, string _rating) {
		name = _name;
		developer = _developer;
		setRating(_rating);
	}
	Games() {  // default constructor, for when there's no argument
		name = "Unknown";
		developer = "Unknown";
		setRating("NR");
	}

	void setRating(string _rating) {
		if (_rating == "G" || _rating == "PG" || _rating == "PG-13" || _rating == "R" || _rating == "NR") {
			rating = _rating;
		}
		else {
			rating = "NR";
		}
	}
	string getRating() {
		return rating;
	}
	void Play() {
		cout << "You decided to play " << name << endl;
	}
};

class AAAGames : public Games {
public:
	AAAGames(string n, string d, string r) {
		name = n;
		developer = d;
		setRating(r);
		
	}
	void MicroTrans() {
		cout << name << " implemented micro transactions! Its not very effective";
	}
	void Play() {
		cout << "You are forced to play " << name << endl;
	}
};

//main -----------------------------------------------------------------------------------------
int main()
{
	Games rimworld("Rimworld", "Tynan", "PG-13");
	AAAGames cod("Call of Duty", "Activision", "R");
	
	rimworld.Play();
	cod.Play();
	cod.MicroTrans();
	return 0;
}

//methods
void pointers() {
	int age = 19;
	int* pAge = &age; //pointer variable
	double gpa = 2.7;
	double* pGpa = &gpa;
	string name = "Mike";
	string* pName = &name;
	//pointer location (memory address)
	cout << &pAge << endl;
	cout << pAge << endl;
	cout << *pAge; //dereferencing
}
void comments() {
	//average one line comment fan
	//vs.
	/*
	average asterisk comment fan
	*/
	cout << "So there's two types of comments. The comment: //test, vs the cooler comment /*test*/";
}
void _2dArrays() {
	//basically matrix
	int numberGrid[3][2] = {
		{1, 2},
		{3, 4},
		{4, 6}
	};
	cout << numberGrid[0][1] << endl; //should output: 2
	cout << numberGrid[2][1] << endl; //should output: 6
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << numberGrid[i][j];
		}
		cout << endl;
	}
}
int power(int baseNum, int powNum) {
	int result = 1;
	for (int i = 0; i < powNum; i++) {
		result = result * baseNum;
	}
	return result;
}
void guessGame() {
	int secretNum = 6;
	int num = 4;
	int guessCount = 0;
	int guessLimit = 3;
	int guessLeft = 3;
	bool outOfGuess = false;

	while (secretNum != num && !outOfGuess) {	
		if (guessCount < guessLimit) {
			cout << "Guess the number from 0 to 10! You have " << guessLeft << " guesses left" << endl;
			cout << "Enter number: ";
			cin >> num;
			guessCount++;
			guessLeft--;
		}
		else {
			outOfGuess = true;
		}
	} 
	if (outOfGuess) {
		cout << "You lose :(";
	}
	else {
		cout << "You win!";
	}
}
void doWhile(int test) {
	do {
		cout << test << endl;
		test++;
	} while (test <= 10);
}
string getDayOfWeek(int dayNum) {
	string dayName;
	switch (dayNum) {
	case 0:
		dayName = "Monday Mayhem";
		break;
	case 1:
		dayName = "Tuesday Tuesday";
		break;
	case 2:
		dayName = "It is Wednesday my dudes";
		break;
	case 3:
		dayName = "Throbbing Thursday";
		break;
	case 4:
		dayName = "Final Friday";
		break;
	case 5:
		dayName = "Saturday Night Live";
		break;
	case 6:
		dayName = "Sun Tzu - Art of War";
		break;
	default:
		dayName = "Invalid day number asshole";
	}
	return dayName;
}
void calculator() {
	double result;
	double num1;
	double num2 = 2.001;
	string opt;

	cout << "Enter first number: ";
	cin >> num1;
	while (true) {
		cout << "Enter operator: ";
		getline(cin, opt);
		if (opt != "+" && opt != "-" && opt != "*" && opt != "/") {
			cout << "Enter a valid operator (+ ,- ,* ,/)" << endl;
			continue;
		}
		break;
	}
	cout << "Enter second number: ";
	cin >> num2;
	if (opt == "+") {
		result = num1 + num2;
	}
	else if (opt == "-") {
		result = num1 - num2;
	}
	else if (opt == "*") {
		result = num1 * num2;
	}
	else if (opt == "/") {
		result = num1 / num2;
	}
	cout << "This is supposed to print out result, but it kept gave me warnings and its irritating to watch that yellow triangle all the time" << endl;
}
void conditions() {
	bool satu = true;
	bool dua = false;
	if (satu | dua) {
		cout << "first condition met";
	}
	else {
		cout << "last condition met";
	}
}
double cube(double num) {
	return num * num * num;
}
void bababooey(string pronoun) {

	cout << "Bababooey " << pronoun << endl;
}
void arrays() {

	int lucky13[13] = { 1,2,3,4,5 };
	lucky13[10] = 10;
	cout << lucky13[10] << endl;
}
void madlibs() {

	string tempat, tokoh, hewan;
	cout << "Enter a tempat: ";
	getline(cin, tempat);
	cout << "Enter a tokoh: ";
	getline(cin, tokoh);
	cout << "Enter a hewan: ";
	getline(cin, hewan);

	cout << "Bambang berdiri di " << tempat << endl;
	cout << "Bambang adalah seorang " << tokoh << endl;
	cout << "Bambang adalah " << hewan << endl;
}
void userinput() {

	string name, ans;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Your name is " + name + ", is that correct? [y/n]\n";
	while (true) {
		getline(cin, ans);
		if (ans == "y") {
			cout << "That is correct";
			break;
		}
		else if (ans == "n") {
			cout << "That is incorrect\n";
			cout << "Enter name: ";
			getline(cin, name);
			cout << "Your name is " + name + ", is that correct? [y/n]\n";
			continue;
		}
		else {
			cout << "Choose between [y/n]";
			continue;
		}
	}
}
void multiply() {
	double num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	double result = num1 * num2;
	cout << "The result is " << result;

}
