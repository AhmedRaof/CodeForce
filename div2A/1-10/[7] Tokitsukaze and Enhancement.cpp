#include<iostream>
#include<string>
using namespace std;
int main() {
  
  // big => is the biggest number we will get [A:4, B:3, C:2, D:1]
  // position => is the position of i
  // remainder
	int n, rem, big = 0, position = 0;
	string str[3];
	cin >> n;

	for (int i = 0; i < 3; i++) {
    // in each loop will will plus 0, 1, 2 to the n
		rem = (n + i) % 4;
		
		if (rem == 1) {
			str[i] = "A";
			big = 4;
			position = i;
		}
		else if (rem == 3) {
			str[i] = "B";
			if (big <= 3) { // to compare it will others if it small so make big = 3 and take position
				big = 3;
				position = i;
			}
			
		}
		else if (rem == 2) {
			str[i] = "C";
			if (big <= 2) {
				big = 2;
				position = i;
			}
		}
		else if (rem == 0) {
			str[i] = "D";
			if (big <= 1) {
				big = 1;
				position = i;
			}
		}
	}

	cout << position << " " << str[position];

}
