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
#include"inputdata.h"
using namespace std; 

void Data::start()
{
	cout << endl;
	cout << "\t\t================================================================" << endl;
	cout << endl;
	cout << "\t\t\tOBJECT ORIENTED PROGRAMMING PROJECT" << endl;
	cout << endl;
	cout << "\t\t\t\t2nd SEMESTER" << endl;
	cout << endl;
	cout << "\t\t\t  BACHELOUR OF COMPUTER SCIENCE" << endl;
	cout << endl;
	cout << "\t\t APPLICATION TO ENTER, STORE AND DELETE INFORMATION REGARDING ANY OF SPORTSMEN" << endl;
	cout << endl;
	cout << "\t\t\t\t DESIGNED BY" << endl;
	cout << endl;
	cout << "\t\t\tBushra Masood";
	cout << "\t\t01-134202-110" << endl;
	cout << endl;
	cout << "\t\t\t\tSUBMITTED TO" << endl;
	cout << endl;
	cout << "\t\t\t\tDr Imran Siddiqi" << endl;
	cout << endl;
	cout << "\t\t\t\t12 - JUNE - 2021" << endl;
	cout << endl;
	cout << "\t\t=================================================================" << endl;
	system("pause");
	system("cls");
}
void Data::addsportsmen()
{
	sportsmen s;
	Date d;
	ofstream ofile;
	ofile.open("record.txt", ios::app);
	int a = 1;
	if (ofile.is_open())
	{
		//while (a)
		{
			cout << "Enter the name of player:  ";
			cin >> s.name;
			cout << "Enter the age : ";
			cin >> s.age;
			cout << "Enter country : ";
			cin >> s.country;
			cout << "Enter address: ";
			cin >> s.address;
			d.setdate();
			//Writing with in the file 
			ofile << "-----------------------------------\n";
			ofile << "Name : " << s.name << endl;
			ofile << "Age : " << s.age << endl;
			ofile << "Address : " << s.address << endl;
			ofile << "Country : " << s.country << endl;
			ofile << "Date of birth: "; d.printDob();
			cout << endl;
			
		}
	}
}
void Data::addcricketplayers()
{
	cricketplayers c;
	ofstream ofile;
	ofile.open("record.txt", ios::app);
	int a = 1;
	if (ofile.is_open())
	{
		//while (a)
		{
			cout << "---------------------------------------------------------\n";
			cout << "////////////////////////////////////////////////////////// \n";
			cout << "---------------------------------------------------------- \n";
			cout << "*****Record of cricket players*****" << endl;
			Data::addsportsmen();
			cout << "Enter team: ";
			cin >> c.team;
			cout << "Enter national_matches played : ";
			cin >> c.national_matches;
			cout << "Enter international_matches played : ";
			cin >> c.international_matches;
			cout << "---------------------------------------------------------\n";
			cout << "////////////////////////////////////////////////////////// \n";
			cout << "---------------------------------------------------------- \n";
			//Writing with in the file 

			ofile << "team : " << c.team << endl;
			ofile << "national_matches : " << c.national_matches << endl;
			ofile << "international_matches : " << c.international_matches << endl;
			ofile << "-----------------------------------\n";
			
		}
	}
}
void Data::addhockeyplayers()
{
	hockeyplayers h;
	ofstream ofile;
	ofile.open("record.txt", ios::app);
	int a = 1;
	if (ofile.is_open())
	{
		//while (a)
		{
			cout << "---------------------------------------------------------\n";
			cout << "////////////////////////////////////////////////////////// \n";
			cout << "---------------------------------------------------------- \n";
			cout << "*****Record of Hockey players*****" << endl;
			Data::addsportsmen();
			cout << "Enter team: ";
			cin >> h.team;
			cout << "Enter national_matches played : ";
			cin >> h.national_matches;
			cout << "Enter international_matches played : ";
			cin >> h.international_matches;
			cout << "---------------------------------------------------------\n";
			cout << "////////////////////////////////////////////////////////// \n";
			cout << "---------------------------------------------------------- \n";
			//Writing with in the file 
			ofile << "team : " << h.team << endl;
			ofile << "national_matches : " << h.national_matches << endl;
			ofile << "international_matches : " << h.international_matches << endl;
			ofile << "-----------------------------------\n";
			
		}
	}
}
void Data::addgameplayer()
{
	games g;
	ofstream ofile;
	ofile.open("record.txt", ios::app);
	int a = 1;
	if (ofile.is_open())
	{
		//while (a)
		{
			cout << "---------------------------------------------------------\n";
			cout << "////////////////////////////////////////////////////////// \n";
			cout << "---------------------------------------------------------- \n";
			cout << "*****Record of game players*****" << endl;
			Data::addsportsmen();
			cout << "Enter team: ";
			cin >> g.team;
			cout << "Enter game : ";
			cin >> g.game;
			cout << "Enter national_matches played : ";
			cin >> g.national_matches;
			cout << "Enter international_matches played : ";
			cin >> g.international_matches;
			cout << "---------------------------------------------------------\n";
			cout << "////////////////////////////////////////////////////////// \n";
			cout << "---------------------------------------------------------- \n";
			//Writing with in the file 
			ofile << "team : " << g.team << endl;
			ofile << "game : " << g.game << endl;
			ofile << "national_matches : " << g.national_matches << endl;
			ofile << "international_matches : " << g.international_matches << endl;
			ofile << "-----------------------------------\n";
			
		}
	}
}
void Data::viewrecord()
{
		string a;
		ifstream in;
		in.open("record.txt");
		while (!in.eof())
		{
			getline(in, a);
			if (a == "")
				cout << "Empty Record" << endl;
			else
				cout << a << endl;
		}

		in.close();

		system("pause");

	}
void Data::search(string m)
{
	system("cls");
	bool found = false;
	ifstream ifile;
	string s = "";
	ifile.open("record.txt");
	if (ifile.is_open())
	{
		while (!ifile.eof())
		{
			ifile >> s;
			if (s == m)
			{
				found = true;
				cout << s;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				getline(ifile, s);
				cout << s << endl;
				break;
			}

		}
		if (found == false) {
			cout << "\n\nRecord Not Found!!\n\n";
		}
		system("pause");
	}
}

void Data::deleteP()
{
	bool found = false;
	system("cls");
	string s = "";
	char another = 'y';
	do
	{
		string nam;
		ifstream rec;
		ofstream temp;
		int count = 0;
		cout << "\n\nEnter sportsman name to delete : ";
		cin >> nam;
		temp.open("temp.txt");
		rec.open("record.txt");
		while (!rec.eof()) {

			rec >> s;
			if (nam != s) {
				temp << s;
				count++;

				if (count == 3) {
					temp << "\n";
					count = 0;
				}
			}
			else if (nam == s) {
				found = true;
				for (int i = 0; i < 8; i++) {
					getline(rec, s);
				}
			}

		}
		rec.close();
		temp.close();
		remove("record.txt");
		rename("temp.txt", "record.txt");
		if (found == true) {
			cout << "Record deleted successfully.";
		}
		else {
			cout << "\n\nRecord Not Found.\n\n";
		}
		cout << "\n\nDo you want to delete another? y/n :  ";
		cin >> another;
	} while (another == 'Y' || another == 'y');
	system("pause");
}
void Data::delete_all()
{
	string a;
	ofstream in;
	in.open("record.txt", ios::trunc);
	while (in)
	{
		in << "";
		break;
	}
	in.close();
	system("pause");
}
