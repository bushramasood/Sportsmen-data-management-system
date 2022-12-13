#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"sportsmen.h"
#include"cricket.h"

using namespace std;

cricketplayers::cricketplayers()
{
	team = "";
	national_matches = 0;
	international_matches = 0;
}
cricketplayers::cricketplayers(string n, int a, string ad, string c, Date d,string t, int na, int i)
{
	this->team = t;
	this->national_matches = na;
	this->international_matches = i;
}
void cricketplayers::Setteam(string t)
{
	this->team = t;
}
void cricketplayers::Setnational_matches(int n)
{
	this->national_matches = n;
}
void cricketplayers::Setinternational_matches(int i)
{
	this->international_matches = i;
}
string cricketplayers::getteam()
{
	return team;
}
int cricketplayers::getnational_matches()
{
	return national_matches;
}
int cricketplayers::getinternational_matches()
{
	return international_matches;
}
void cricketplayers::display()
{
	sportsmen::displaydata();
	cout << "team : " << team << endl;
	cout << "National matches played : " << national_matches << endl;
	cout << "International matches played: " << international_matches << endl;
}
