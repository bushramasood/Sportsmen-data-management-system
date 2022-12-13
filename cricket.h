#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"sportsmen.h"
using namespace std;
class cricketplayers : public sportsmen//Child class
{
public:
	string team;
	int national_matches;
	int international_matches;

	cricketplayers();
	
	cricketplayers(string n, int a, string ad, string c, Date d,string t, int na, int i);
	
	void Setteam(string t);
	
	void Setnational_matches(int n);
	
	void Setinternational_matches(int i);
	
	string getteam();
	
	int getnational_matches();
	
	int getinternational_matches();
	
	void display();
};
