#pragma once
#include <iostream>
#include <string>
using namespace std;

class HeartRate {

	//public functions

public:

	explicit HeartRate(string first, string last, int month, int day, int year) : nameFirst(first), nameLast(last), dobMonth (month), dobDay(day), dobYear(year) 
	{

	}//end constructor

	//Name
		
		//setters
		void setNameFirst(string first)
		{
			nameFirst = first;
		}

		void setNameLast(string last)
		{
			nameLast = last;
		}
		
		//getters

		string getNameFirst() const
		{
			return nameFirst;
		}

		string getNameLast() const
		{
			return nameLast;
		}

	//date of birth

		//setters
		void setBirthMonth(int month)
		{
			if (month > 12) {
				cout << "The number you have entered is greater than 12, please enter a number 1-12: " << endl;
			} else {

				dobMonth = month;
			}
			
		}

		void setBirthDay(int day)
		{
			dobDay = day;
		}

		void setBirthYear(int year)
		{
			dobYear - year;
		}

		//getters

		int getBirthMonth() const
		{
			return dobMonth;
		}

		int getBirthDay() const
		{
			return dobDay;
		}

		int getBirthYear() const
		{
			return dobYear;
		}

	//age

		int getAge() const 
		{

		}


private:
	string nameFirst;
	string nameLast;
	int dobMonth;
	int dobDay;
	int dobYear;
};