#include<iostream>
#include<string>
using namespace std;
int main() {

	int x;
	cin >> x;
	
	int a = 0, b = 0;

	/*
		this loop will go around all the odds (if x = 3)
		and see which one is correct
		1 1
		1 2
		1 3
		2 1
		2 2
		2 3
		3 1
		3 2
		3 3
	*/

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x; j++) {
			if (1 <= i && j <= x && i % j == 0 && i * j > x && i / j < x) {
				a = i;
				b = j;
			}
		}
	}
	// so there is no number done the condition 1 <= i && j <= x && i % j == 0 && i * j > x && i / j < x
	if (a == 0 && b == 0) {
		cout << "-1";
	}
	else {
		cout << a << " " << b << endl;
	}
}
