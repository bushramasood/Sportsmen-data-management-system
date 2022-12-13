#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"sportsmen.h"
using namespace std;

class games : public sportsmen//child class
{
public:
	string team;
	string game;
	int national_matches;
	int international_matches;

	games();
	
	games(string n, int a, string ad, string c, Date d,string t, string g, int na, int i);
	
	void Setteam(string t);
	
	void Setgame(string g);
	
	void Setnational_matches(int n);
	
	void Setinternational_matches(int i);
	
	string getteam();
	
	string getgame();
	
	int getnational_matches();
	
	int getinternational_matches();
	
	void display();
	
};
