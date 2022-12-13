#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"date.h"
using namespace std; 

Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
void Date::setDay(int day)
{
	this->day = day;
}
void Date::setMonth(int month)
{
	this->month = month;
}
void Date::setYear(int year)
{
	this->year = year;
}
int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
void Date::setdate()
{
	cout << "Enter date of birth : [yyyy - mm - dd] : ";
	cin >> day;
	cin >> month;
	cin >> year;
}
void Date::printDob()
{
	if ((day > 0 && day <= 31) || (month > 0 && month < 13))
	{
		cout << day << "-" << month << "-" << year << endl;
	}
}