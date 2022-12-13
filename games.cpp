#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"games.h"

games::games()
{
	team = "";
	game = "";
	national_matches = 0;
	international_matches = 0;
}
games::games(string n, int a, string ad, string c, Date d,string t, string g, int na, int i)
{
	this->team = t;
	this->game = g;
	this->national_matches = na;
	this->international_matches = i;
}
void games::Setteam(string t)
{
	this->team = t;
}
void games::Setgame(string g)
{
	this->game = g;
}
void games::Setnational_matches(int n)
{
	this->national_matches = n;
}
void games::Setinternational_matches(int i)
{
	this->international_matches = i;
}
string games::getteam()
{
	return team;
}
string games::getgame()
{
	return game;
}
int games::getnational_matches()
{
	return national_matches;
}
int games::getinternational_matches()
{
	return international_matches;
}
void games::display()
{
	sportsmen::displaydata();
	cout << "team : " << team << endl;
	cout << "Game : " << game << endl;
	cout << "National matches played : " << national_matches << endl;
	cout << "International matches played: " << international_matches << endl;
}