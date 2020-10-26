#include<iostream>
#include<string>
using namespace std;
int main() {

	// There are n employees in Fafa's company
	// Fafa has to divide the tasks of this project among all the employees.
	// he decided to choose the best l employees in his company as team leaders.
	/* Fafa will divide the tasks among only the team leadersand each 
	   team leader will be responsible of some positive number of employees to give them the tasks.*/
	// Team leaders should be responsible for the same number of employees.
	/* Given the number of employees n, find in ***how many ways*** Fafa could choose 
	   the number of team leaders l in such a way that it is possible to divide employees between them evenly.*/

	/*
		for example number of employees is 10 =>
			10 % 1 => the number of employees will be zero ,so it is equivalent
			10 % 2 => yes
			10 % 3 => no
			10 % 4 => no
			10 % 5 => yes
			10 % 6 => no
			10 % 7 => no
			10 % 8 => no
			10 % 9 => no
			we can say 10 because they will not be any employees all will be team leader
	*/
	int n, numWays = 0, i = 1 ;
	cin >> n;
	while (i < n) {

		if (n % i == 0) {
			numWays++;
		}

		i++;
	}
	cout << numWays;
}
