#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	
	string a, b, c, d;
	int day;
	cin >> a >> b;
	cin >> day;
	
	for (int i = 0; i < day; i++) {
		cout << a << " " << b << endl;
		cin >> c >> d;
		if (a == c)
			a = d;
		else if (b == c)
			b = d;
	}
	cout << a << " " << b << endl;
	return 0;
}
