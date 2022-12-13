#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"date.h"
using namespace std;
class sportsmen //composite class  //Parent class
{
public:
    string name;
	int age;
	string address;
	string country;
	Date dateofbirth;

	sportsmen();
	
	sportsmen(string n, int a, string ad, string c, Date d);

	void setdata(string n, int a, string ad, string c, Date d);
	
	void setName(string n);
	
	void setAge(int a);
	
	void setAdress(string a);
	
	void setcountry(string c);
	
	string getName();
	
	int getAge();
	
	string getAddress();
	
	string getcountry();

	void displaydata();
};
