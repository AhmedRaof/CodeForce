#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int a, b, c;
	int l = 1, ap = 2, p = 4;
	int res = -7;
	cin >> a >> b >> c;
	do {
		a -= l;
		b -= ap;
		c -= p;
		res += 7;
	} while (a >= 0 && b >= 0 && c >= 0);
	cout << res;
	return 0;
}
