
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include"date.h"
#include"sportsmen.h"
#include"cricket.h"
#include"hockey.h"
#include"games.h"
#include"inputdata.h"
using namespace std;

int main()
{
	Data da;
	char choice, choice1;

	while (1) {
		da.start();
		system("pause");
		system("cls");
		cout << "\n\n\n\t\t\t====== MAIN MENU ======\n\t\t";
		cout << "\t\t\t\t\n\t\t\t==>>   SHOW MENU\t[1]\n\t";;
		cout << "\n\t\t\t==>>   EXIT\t[2]\t\t";
		cout << "\n\n\t\t\t======================\n\t\t";
		cout << "\n\n  ==>>  Enter your choice : ";
		fflush(stdin);
		choice = _getche();
		int q = 1;
		string n;
		switch (choice)
		{
		case '1':
			while (q == 1) {
				system("cls");
				cout << "\n\t==>>    Add cricketplayers.\t[1]  \n";
				cout << "\n\t==>>    Add hockeyplayers.\t[2]  \n";
				cout << "\n\t==>>    Add other game players.\t[3]  \n";
				cout << "\n\t==>>    search record.\t[4] \n";
				cout << "\n\t==>>    Veiw record.\t[5] \n";
				cout << "\n\t==>>    Delete record of your choice.\t[6]  \n";
				cout << "\n\t==>>    DELETE all record.\t[7]  \n";
				cout << "\n\t==>>    EXIT.\t[0]\n";
				cout << "\n\n  ==>>  Enter your choice : ";
				choice1 = _getche();

				switch (choice1)
				{
				case '1':

					cout << "\n\nEnter detail of cricket players\n\n";
					da.addcricketplayers();
					break;
				case '2':
					cout << " \n \n Enter detail of hockey players \n \n ";
					da.addhockeyplayers();
					break;

				case '3':
					cout << " \n \n Enter detail of other game players \n \n ";
					da.addgameplayer();
					break;
				case '4':
					cout << "\n\nEnter the name of player to search\n\n";
					cin >> n;
					da.search(n);
					break;
				case '5':
					cout << "\n\nVeiw all record\n\n";
					da.viewrecord();
					break;
				case '6':
					cout << "\n\nDelete player of your choice\n\n";
					da.deleteP();
					break;
				case '7':
					cout << "\n\nDelete all record\n\n";
					da.delete_all();
					break;
				case '0':
					exit(1);
					break;
				}
			}

			system("pause");
			return 0;
		}
	}

















	//cout << "\n\n\n\n\n\n\n\n\t\t\t====== PATIENTS RECORDS  ======\n\t\t";
	//cout << "\n\n\t\t\t======================\n\t\t";
	//cout << "Enter 1 to add covid patients first \n  Enter 0 to add Regular patients first  : ";
	//cout << "-----------------------------------------------------------------------------------\n";
	//cin >> a;
	//if (a == 1)
	//{
	//	cout << "Enter Covid Patients : \n \n";
	//	d.AddCovidPatient();
	//	cout << " \n \n Enter Regular Patients \n \n ";
	//	d.addRegularPatient();
	//}
	//else
//{
	//	cout << "Enter Regular Patients \n \n";
	//	d.addRegularPatient();
	//	cout << "Enter Covid Patients \n \n";
	//	d.AddCovidPatient();
	//}



}

