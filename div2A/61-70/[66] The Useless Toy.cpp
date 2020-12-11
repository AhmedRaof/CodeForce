#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	int n, temp1, temp2;
	bool cw = false, ccw = false;
	getline(cin, s);
	cin >> n;
	temp1 = temp2 = int(s[0]);
	// the clock return the same sequence each 4 second
	while (n > 4)
		n -= 4;
	// if clockWise
	// v   <   ^   >   v
	// 118 60  94  62  118
	int t1 = n, t2 = n;
	while (t1--) {
		if (temp1 == 118)
			temp1 = 60;
		else if (temp1 == 60)
			temp1 = 94;
		else if (temp1 == 94)
			temp1 = 62;
		else if (temp1 == 62)
			temp1 = 118;
	}
	if (temp1 == int(s[2]))
		cw = true;
	// else if counter clockWise
	// v   >   ^   <   v
	// 118 62  94  60  118
	while (t2--) {
		if (temp2 == 118)
			temp2 = 62;
		else if (temp2 == 62)
			temp2 = 94;
		else if (temp2 == 94)
			temp2 = 60;
		else if (temp2 == 60)
			temp2 = 118;
	}
	if (temp2 == int(s[2]))
		ccw = true;
	// else
	if (cw && ccw)
		cout << "undefined" << endl;
	else if (!cw)
		cout << "ccw" << endl;
	else if (!ccw)
		cout << "cw" << endl;
	return 0;
}

 
