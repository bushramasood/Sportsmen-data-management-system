#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Date //Simple class
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	
	Date(int day, int month, int year);
	
	void setDay(int day);
	
	void setMonth(int month);
	
	void setYear(int year);
	
	int getDay();
	
	int getMonth();
	
	int getYear();
	
	void setdate();
	
	void printDob();
};
