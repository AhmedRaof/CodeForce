#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	
	string n;
	int count = 0;
	cin >> n;
	if (n.length() < 6) {
		cout << "no";
		return 0;
	}
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == '1') { // get the position of the first 1 element
			for (int j = i + 1; j < n.length(); j++) {
				if (n[j] == '0') { // count the number of 0 after the first 1
					count++;
				}
			}
			break;
		}
	}
	if (count >= 6)
		cout << "yes";
	else
		cout << "no";
	return 0;
}
