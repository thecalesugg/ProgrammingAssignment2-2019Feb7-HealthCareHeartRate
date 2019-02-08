// ProgrammingAssignment2-HealthCare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;




int main()
{

	string nameFirst;
	string nameLast;
	int dobMonth;
	int dobDay;
	int dobYear;


	cout << "Welcome to the Heart Rate Calculator! Please read the following instructions carefully. " << endl;

	//first name get
	cout << "Please enter your first name: " << endl;
	cin >> nameFirst;
	//last name entry
	cout << "Please enter your last name: " << endl;
	cin >> nameLast;

	//date of birth
	cout << "Please enter the month you were born as a two digit month.\nExample: February would be 02: " << endl;
	cin >> dobMonth;
	cout << "Please enter the two-digit day you were born: " << endl;
	cin >> dobDay;
	cout << "Please enter the four-digit year you were born: " << endl;
	cin >> dobYear;

	cout << "Thank you! Just one moment!\n" << endl;

	HeartRate newPatient(nameFirst, nameLast, dobMonth, dobDay, dobYear);

	newPatient.displayInfo();


}
