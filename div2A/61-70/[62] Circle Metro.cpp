#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {

	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	a--, x--, b--, y--;

	while (true) {
		if (a == b) {
			cout << "Yes";
			return 0;
		}
		if (a == x || b == y) {
			break;
		}
		a = (a + 1) % n; // when the number became equal to n => so it will be 1 again else it print the number
		b = (b - 1 + n) % n; // the same rule
	}
	cout << "No";
	return 0;
}
