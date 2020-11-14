#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	long long int crush, money, Allhouse;
	cin >> Allhouse >> crush >> money;

	long long int* houseCost = new long long int[Allhouse + 1], * housPos = new long long int[Allhouse + 1], j = 1;
	int distance = 0;

	houseCost[0] = 0;

	for (int i = 0; i < Allhouse; i++) {
		housPos[i] = 0;
	}

	for (int i = 1; i <= Allhouse; i++) {
		cin >> houseCost[i];

		if (money >= houseCost[i] && houseCost[i] != 0) {
			housPos[j] = i;
			j++;
		}
	}

	distance = abs(housPos[1] - crush);

	for (int i = 2; i < Allhouse; i++) {
		if (housPos[i] == 0) {
			break;
		}
		else if (abs(housPos[i] - crush) <= distance) {
			distance = abs(housPos[i] - crush);
		}
	}

	cout << distance * 10;
	return 0;
}
