#include<iostream>
#include<string>
using namespace std;
int main() {

	// Ehab chooses his favorite integer n and then they take turns, starting from Mahmoud
	// ehab => n \ mohamed => a
	// he has to choose an integer a and subtract it from n such that:
	// If it's Mahmoud's turn, a has to be even, but if it's Ehab's turn, a has to be odd.
	// 1 ≤ a ≤ n.
	/*
		if the first number is odd => Ehab is won
		if the first number is even => mohamed is won
		
	*/

	
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << "Mahmoud\n";
	}
	else {
		cout << "Ehab\n";
	}
}
