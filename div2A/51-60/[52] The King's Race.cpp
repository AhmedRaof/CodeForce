#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	long long int b1 = n, b2 = n, w1 = 1, w2 = 1, c1 = 0, c2 = 0, tb = 0, tw = 0;
	cin >> c1 >> c2;

	tb = abs(c1 - b1) + abs(c2 - b2);
	tw = abs(c1 - w1) + abs(c2 - w2);

	if (tb < tw)
		cout << "Black";
	else if (tb > tw)
		cout << "White";
	else if (tb == tw)
		cout << "White";

	return 0;
}
