#include<iostream>
#include<string>
using namespace std;
int main() {
	
	// number of the key from 0 to 10
	// n => representing the number of digits in the sequence you have
	// m => the number of keys on the keypad that have figerprints
	// sugesstedNum => the number that key contain from
	// fingerPrin => the keys with fingerprints
	string n, m;
	cin >> n >> m;
	string sug, fing, key;
	cin.ignore(); // so we can enter the two string 
	getline(cin, sug); // getline(cin,S);
	getline(cin, fing); // we use getline => to enter string with space between them
	for (int i = 0; i < sug.length(); i++) {
		// we use this condition to eskip the space
		if (i % 2 == 0) {
			for (int j = 0; j < fing.length(); j++) {
				// we use this condition to eskip the space
				if (j % 2 == 0) {
					if (sug[i] == fing[j]) { // compare if the suggestion key equal to finger => add it to key
						key += fing[j];
					}
				}
			}
		}
		
	}
	for (int i = 0; i < key.length(); i++) {
		cout << key[i] << " ";
	}
}
