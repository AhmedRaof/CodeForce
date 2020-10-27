#include<iostream>
#include<string>
using namespace std;
int main() {

	// which n people participate
	/* He decided to award them all with pens and notebooks. 
	   It is known that Vus has exactly m pens and k notebooks.*/
	// Print "Yes" if it possible to reward all the participants. Otherwise, print "No".
	/*
		n => number of people
		m => pens
		k => notebooks
	*/
	int n, m, k;
	cin >> n >> m >> k;

	if (n <= m && n <= k) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
}
