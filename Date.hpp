/*********************************************************************
** Author: Sean Reilly CS161-405
** Date: February 5, 2015
*********************************************************************/

#ifndef DATE_HPP
#define DATE_HPP

// Date class definition

class Date
{
	private:
		int day;
		int month;
		int year;

	public:
		Date();
		Date(int,int,int);
		void setMonth(int);
		void setDay(int);
		void setYear(int);
		void print1();
		void print2();
		void print3();
};
#endif
