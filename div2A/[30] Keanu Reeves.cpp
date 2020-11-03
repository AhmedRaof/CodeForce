#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	the number is good => if (the numbers of zeroes != the numbers of ones)
	the number is not good => if (the numbers of zeroes == the numbers of ones)
	SOLVE:
		we calculate the nubmers of zeroes and the numbers of ones
			/\ if they are not equal => so the result is only 1 which is the same number
			/| if they are equal => so the result is 2 number
										we have to sperate the number so they became not equal
										we can print the first number then print the remain number
*/
int main() {
	int n, numZ = 0, numO = 0;
	cin >> n;
	string str;
	cin >> str;
	for (int i = 0; i < str.length() /*OR n*/; i++) {
		if (str[i] == '0')
			numZ++;
		else
			numO++;
	}
	if (numZ != numO) {
		cout << "1" << endl << str;
	}
	else {
		cout << "2" << endl << str[0] << " ";
		for (int i = 1; i < str.length() /*OR n*/; i++) {
			cout << str[i];
		}
	}
}
