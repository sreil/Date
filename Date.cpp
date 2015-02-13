/*********************************************************************
** Author: Sean Reilly CS161-405
** Date: February 5, 2015
*********************************************************************/

#include <iostream>
#include <string>
#include "Date.hpp" //include the hpp file with the class

using namespace std;

Date::Date() //constructor
{
	setDay(1);
	setMonth(1);
	setYear(2001); //initialize to default of 1/1/2001
}
Date::Date(int Day, int Month, int Year)
{
	setDay(Day);
	setMonth(Month);
	setYear(Year);
}
void Date::setDay(int Day)
{
	day = Day;
}
void Date::setMonth(int Month)
{
	month = Month;
}
void Date::setYear(int Year)
{
	year = Year;
}
void Date::print1()
{
	cout << month << "/" << day << "/" << year << endl; //format for option 1
}
void Date::print2()
{
	string convMonth;

	if (month == 1)
	{
		convMonth = "January ";
	}
	else if (month == 2)
	{
		convMonth = "February ";
	}
	else if (month == 3)
	{
		convMonth = "March ";
	}
	else if (month == 4)
	{
		convMonth = "April ";
	}
	else if (month == 5)
	{
		convMonth = "May ";
	}
	else if (month == 6)
	{
		convMonth = "June ";
	}
	else if (month == 7)
	{
		convMonth = "July ";
	}
	else if (month == 8)
	{
		convMonth = "August ";
	}
	else if (month == 9)
	{
		convMonth = "September ";
	}
	else if (month == 10)
	{
		convMonth = "October ";
	}
	else if (month == 11)
	{
		convMonth = "November ";
	}
	else if (month == 12)
	{
		convMonth = "December ";
	}

	cout << convMonth << day << ", " << year << endl; //converts numbers to month name for option 2
}
void Date::print3() //converts numbers to month name for option 3
{
	string convMonth;

	if (month == 1)
	{
		convMonth = "January ";
	}
	else if (month == 2)
	{
		convMonth = "February ";
	}
	else if (month == 3)
	{
		convMonth = "March ";
	}
	else if (month == 4)
	{
		convMonth = "April ";
	}
	else if (month == 5)
	{
		convMonth = "May ";
	}
	else if (month == 6)
	{
		convMonth = "June ";
	}
	else if (month == 7)
	{
		convMonth = "July ";
	}
	else if (month == 8)
	{
		convMonth = "August ";
	}
	else if (month == 9)
	{
		convMonth = "September ";
	}
	else if (month == 10)
	{
		convMonth = "October ";
	}
	else if (month == 11)
	{
		convMonth = "November ";
	}
	else if (month == 12)
	{
		convMonth = "December ";
	}

	cout << day << " " << convMonth << year << endl;
}
int main()
{
	Date date;

	int Day;
	int Month;
	int Year;
	int choice = 0;

	cout << "What month is it? (1-12) " << endl;
	cin >> Month;
	date.setMonth(Month);

	cout << "What day is it? " << endl;
	cin >> Day;
	date.setDay(Day);

    cout << "And what is the year? (4 digits please)" << endl;
	cin >> Year;
	date.setYear(Year);

	while(choice != 4)
	{
		cout << "The program will now output whichever format you choose!" << endl;
		cout << "Please select a format " << endl;
		cout << "Option 1: mm/dd/yy" << endl;
		cout << "Option 2: month day, year" << endl;
		cout << "Option 3: day month year" << endl;
		cout << "Please press 4 to terminate the program" << endl;
		cout << "Enter Choice :";
		cin >> choice;

		switch(choice)
		{
			case 1:
				date.print1();
				break;
			case 2:
				date.print2();
				break;
			case 3:
				date.print3();
				break;
			case 4:
				cout << "Terminating Program" << endl;
				break;
			default:
				cout << "Enter a value between 1 - 4" << endl;
		}

	return 0;
}
}
