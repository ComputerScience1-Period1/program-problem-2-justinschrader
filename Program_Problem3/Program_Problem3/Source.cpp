/*
Justin Schrader - 9/26/17 - 1
Take In Data : *
I will code a program to take in data and display values of the correct variables.
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Define and Assign your variable(s), float/double decimals. bool t/f
	int Legos;
	float Cookies;
	double Cells;
	bool  Bad_Time= false; // assume no one has beet roots
	char Death;
	int calc_1, calc_2, calc_3;


	//User Queries
	
	cout << "How many Legos do you have?";
		cin >> Legos; //int
		cout << "How many ounces are in the bag of cookies?";
		cin >> Cookies; 
		cout << "Estimate the number of cells in the average female body.";
		cin >> Cells;
		cout << "Do you want to have a bad time? Y/N.";
		cin >> Death;
		if (Death == 'Y' || Death == 'y') {
			Bad_Time = true; // freely changes value of true/false
		}
		
	//After questions print out stored data
	cout << "You have " << Legos << " number of legos. /n";
	cout << "There's " << Cookies << " ounces of cookies." << endl; //Different type of new line
	;	cout << "The average amount of cells in the female body is " << Cells << ".";'\n';
	;	cout << boolalpha << "The answer of if you want a bad time is " << Bad_Time << endl;


	// Change Values
	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;

		// Pause
	pause();
}