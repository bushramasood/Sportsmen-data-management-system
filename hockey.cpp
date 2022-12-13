#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"sportsmen.h"
#include"hockey.h"
using namespace std;

hockeyplayers::hockeyplayers()
{
	team = "";
	national_matches = 0;
	international_matches = 0;
}
hockeyplayers::hockeyplayers(string n, int a, string ad, string c, Date d,string t, int na, int i)
{
	this->team = t;
	this->national_matches = na;
	this->international_matches = i;
}
void hockeyplayers::Setteam(string t)
{
	this->team = t;
}
void hockeyplayers::Setnational_matches(int n)
{
	this->national_matches = n;
}
void hockeyplayers::Setinternational_matches(int i)
{
	this->international_matches = i;
}
string hockeyplayers::getteam()
{
	return team;
}
int hockeyplayers::getnational_matches()
{
	return national_matches;
}
int hockeyplayers::getinternational_matches()
{
	return international_matches;
}
void hockeyplayers::display()
{
	sportsmen::displaydata();
	cout << "team : " << team << endl;
	cout << "National matches played : " << national_matches << endl;
	cout << "International matches played: " << international_matches << endl;
}