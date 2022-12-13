#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include"date.h"
#include"sportsmen.h"
#include"cricket.h"
#include"hockey.h"
#include"games.h"

using namespace std;
class Data : public cricketplayers, public hockeyplayers,public games //child class
{
public:
	void start();
	void addsportsmen();
	void addcricketplayers();
	void addhockeyplayers();
	void addgameplayer();
	void viewrecord();
	void search(string);
	void deleteP();
	void delete_all();
};
