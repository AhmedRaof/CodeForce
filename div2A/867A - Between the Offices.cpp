#include<iostream>
#include<string>
using namespace std;
int main() {

	// You prefer flying from Seattle to San Francisco than in the other direction
	// n days you know whether you were in San Francisco office or in Seattle office
	//  You always fly at nights, so you never were at both offices on the same day.
	// if you flew more times from Seattle to San Francisco during the last n days, or not.
	/*
		fs 1 to numF
		sf 1 to numS
		ff not
		ss not
	*/
	/*
		F => 70
		S => 83
	*/
  
	int n, numF = 0, numS = 0;
	cin >> n;
	string str;
	cin >> str;

	for (int i = 0; i < n; i++) {
		if (int(str[i]) == 70 && int(str[i + 1]) == 83) {
			numF++;
		}
		else if (int(str[i]) == 83 && int(str[i + 1]) == 70) {
			numS++;
		}
	}

	if (numS > numF) {
		cout << "YES" << endl;;
		numF = 0;
		numS = 0;
	}
	else {
		cout << "NO" << endl;
		numF = 0;
		numS = 0;
	}
}
