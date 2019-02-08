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

		int getAge() 
		{
			age = 2019 - dobYear;
			return age;
		}

	//Heart Rate

		//max
		int getMaximumHeartRate()
		{
			maxHeartRate = 220 - getAge();
			return maxHeartRate;
		}

		//target rate

		int getTargetHeartRateUpper()
		{
			targetHeartRateUpper = getMaximumHeartRate() * .85;
			return targetHeartRateUpper;
		}

		int getTargetHeartRateLower()
		{
			targetHeartRateLower = getMaximumHeartRate() * .50;
			return targetHeartRateLower;
		}
	//Display Message
		void displayInfo()
		{
			cout << "Thank you for your patience!\nFull Name: " << getNameFirst() << " " << getNameLast() << endl;
			cout << "Date of Birth: " << getBirthMonth() << "-" << getBirthDay() << "-" << getBirthYear() << endl;
			cout << "Current Age: " << getAge() << " years old." << endl;
			cout << "Your maximum heart rate is: " << getMaximumHeartRate() << " bpm\nYour target heart rate is " << getTargetHeartRateLower() << " to " << getTargetHeartRateUpper() << " bpm" << endl;
		} 


private:

	string nameFirst;
	string nameLast;
	int dobMonth;
	int dobDay;
	int dobYear;

	int age;
	int maxHeartRate;
	int targetHeartRateUpper;
	int targetHeartRateLower;

};