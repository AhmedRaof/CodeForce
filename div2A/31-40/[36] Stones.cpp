#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int res = 0;

int oneOperation(int x, int y) {
	while (x > 0 && y / 2 != 0) {
		x -= 1;
		y -= 2;
		res += 3;
	}
	//cout << "res:" << res << " a:" << x << " b:" << y << endl;
	return res;
}
int twoOperation(int a, int b, int c) {
	while (b > 0 && c / 2 != 0) {
		b -= 1;
		c -= 2;
		res += 3;
	}
	//cout << "res:" << res << " b:" << b << " c:" << c << endl;
	return oneOperation(a, b);
}
int main() {
	int t, a, b, c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		cout << twoOperation(a, b, c) << endl;
		res = 0;
	}
	return 0;
}
