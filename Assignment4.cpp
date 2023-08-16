/******************************************

Assignment 4

This program will create a program to keep track of the statistics for a kid’s soccer team.  The program will have a structure that defines what data the program will collect for each of the players.

The structure will keep the following data:

Players Name (string)
Players Jersey Number (integer)
Points scored by Player (integer)
The program will have an array of 12 players (use less for testing and development, use a constant for the size).  Each element in the array is a different player on the team.

The program will ask the user to enter information for each player.  The program will also display the team information in a table format. After the table, the total points scored by a team will be displayed.

The program will also determine which player scored the most points on the team.

Validation:

Do not accept negative value for player’s number
Do not accept negative value for player’s score
Required Methods:

void GetPlayerInfo(Player &);
void ShowPlayerInfo(const Player);
int GetTotalPoints(const Player[ ], int);
void ShowHighest(Player [ ], int);

Author: Cesar Roncancio

Created : 9/26/2021

Revisions : 9/26/2021 I declared the structures, functions and constants. used fors to visit the player array and show the info entered by the user.
******************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Player {
	string name;
	int number,
		points;
};

void getPlayerInfo(Player&);
void showInfo(Player);
int getTotalPoints(Player[], int);
void showHighest(Player[], int);

int main()
{
	const int SIZE = 12;
	Player team[SIZE];
	for (int index = 0; index < SIZE; index++)
	{
		cout << "PLAYER #" << index + 1 << endl;
		cout << "---------" << endl;
		getPlayerInfo(team[index]);
	}

	cout << setw(20) << left << "NAME" << setw(10) << left << "NUMBER"
		<< setw(10) << left << "POINTS SCORED" << endl;
	for (int index = 0; index < SIZE; index++)
	{
		showInfo(team[index]);
	}

	cout << "TOTAL POINTS: " << getTotalPoints(team, SIZE) << endl;

	showHighest(team, SIZE);

	cout << endl;
	system("pause");
	return 0;
}

// this function prompts user to enter info about each player on team
void getPlayerInfo(Player& p)
{
	cout << "Player name: ";
	getline(cin, p.name);
	cout << "Player's number: ";
	cin >> p.number;
	while (p.number < 0)
	{
		cout << "Player's number cannot be negative. Try again." << endl;
		cout << "Player's number: ";
		cin >> p.number;
	}
	cout << "Points scored: ";
	cin >> p.points;
	while (p.points < 0)
	{
		cout << "Player's points cannot be negative. Try again." << endl;
		cout << "Player's points: ";
		cin >> p.points;
	}
	cout << endl;
	cin.ignore();
}

// this function displays the player info about each player on team
void showInfo(Player p)
{
	cout << setw(23) << p.name << setw(9) << left << p.number
		<< setw(13) << left << p.points << endl;
}

// this function adds up and returns the total points on team
int getTotalPoints(Player team[], int size)
{
	int total = 0;
	for (int index = 0; index < size; index++)
	{
		total += team[index].points;
	}
	return total;
}

// this function displays the player in team with the most points 
void showHighest(Player team[], int size)
{
	int highest = team[0].points;
	int index = 0;
	for (int count = 1; count < size; count++)
	{
		if (team[count].points > highest)
		{
			highest = team[count].points;
			index = count;
		}
	}
	cout << "The player who scored the most points is: " << team[index].name;
}