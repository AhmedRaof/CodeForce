#include<iostream>
#include<string>
using namespace std;

int main() {
	/*
		NOTE: to solve this problem we take the biggest chian for example:
			  APPAPPPAPPPP
			  the biggest chain is APPPP => so the result will be 4 
		EXPLAIN: A->APA->APPA->APPP ** minute 1 
				 AA->AAA->APAA->APP ** minute 2
				 AAAAAA->AAAA->AP   ** minute 3
				 AAAAAAAAAAA->A     ** minute 4
	*/
	int t, n, result, minute, t2 = 0;
	cin >> t; /* if t is 1 */

	while (t--) {
		result = minute = 0;
		cin >> n; /* if n is 4 */

		char *status = new char [n];
		cin >> status; /* PPAP */
		// this loop to go throug all character
		for (int i = 0; i < n; i++) { 
			/*
				PPAP
				in the first the if statement will be false until
				element 'A'
			*/
			if (status[i] == 'A') { // if the character is 'A'
				/*
					j = i+1 = 3
					the if statement will be true
					so it will add minute then go out from loop
					if (minute = 1 > result = 0)
						they will make result = 1
								FINISH :)
				*/
				for (int j = i + 1; j < n; j++) { // go through all another character
					if (status[j] == 'P') { // if the element next to 'A' is 'P'
						++minute; // add one minute
					}
					else if (status[j] == 'A') { // else if the element next to 'A' is 'A'
						break; // break the loop
					}
				}
				if (minute > result) { // if minute > cnt
					result = minute; // make cnt = minute
				}
				minute = 0; // return minute to 0 before go to next element
			}
		}
		cout << result << endl; // the result
	}
}
