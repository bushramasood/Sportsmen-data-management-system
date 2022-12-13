#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"date.h"
#include"sportsmen.h"
using namespace std;

sportsmen::sportsmen()
{
	name = "";
	age = 0;
	address = "";
	country = "";
	dateofbirth;
}
sportsmen::sportsmen(string n, int a, string ad, string c, Date d)
{
	this->name = n;
	this->age = a;
	this->address = ad;
	this->country = c;
	this->dateofbirth = d;
}
void sportsmen::setdata(string n, int a, string ad, string c, Date d)
{
	this->name = n;
	this->age = a;
	this->address = ad;
	this->country = c;
	dateofbirth = d;
}
void sportsmen::setName(string n)
{
	this->name = n;
}
void sportsmen::setAge(int a)
{
	this->age = a;
}
void sportsmen::setAdress(string a)
{
	this->address = a;
}
void sportsmen::setcountry(string c)
{
	this->country = c;
}
string sportsmen::getName()
{
	return name;
}
int sportsmen::getAge()
{
	return age;
}
string sportsmen::getAddress()
{
	return address;
}
string sportsmen::getcountry()
{
	return country;
}
void sportsmen::displaydata()
{
	cout << "Name : " << getName() << endl;
	cout << "Age : " << getAge() << endl;
	cout << "Country : " << getcountry() << endl;
	cout << "Address : " << getAddress() << endl;
	cout << "Date of birth : "; dateofbirth.printDob();
}