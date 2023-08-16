# Assignment4P2
Assignment4 Programming 2
-------------------------------------------------------------------------------------

This program will create a program to keep track of the statistics for a kid’s soccer team.  The program will have a structure that defines what data the program will collect for each of the players.
<br>
The structure will keep the following data:
<br>
Players Name (string) <br>
Players Jersey Number (integer) <br>
Points scored by Player (integer) <br>
The program will have an array of 12 players (use less for testing and development, use a constant for the size).  Each element in the array is a different player on the team.
<br>
The program will ask the user to enter information for each player.  The program will also display the team information in a table format. After the table, the total points scored by a team will be displayed.
<br>
The program will also determine which player scored the most points on the team.

<br>
Validation:
<br>
Do not accept negative value for player’s number <br>
Do not accept negative value for player’s score <br>
Required Methods:
<br>
void GetPlayerInfo(Player &); <br>
void ShowPlayerInfo(const Player); <br>
int GetTotalPoints(const Player[ ], int); <br>
void ShowHighest(Player [ ], int); <br>

<br>
Author: Cesar Roncancio
<br>
Created: 9/26/2021
<br>
Revisions: 9/26/2021 I declared the structures, functions and constants. used fors to visit the player array and show the info entered by the user.
