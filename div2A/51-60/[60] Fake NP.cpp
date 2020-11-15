#include<iostream>
using namespace std;
int main() {

	int f, t, res2 = 0, res3 = 0;
	cin >> f >> t;

	if (f == t)
		cout << f;
	else
		cout << "2";
	/*OR 
	for (int i = f; i <= t; i++) {

		if (i % 2 == 0) {
			res2++;
			if (res2 > t - f)
				break;
		}
		if (i % 3 == 0) {
			res3++;
			if (res3 > t - f)
				break;
		}
	}
	
	if (res3 >= res2)
		cout << "3";
	else
		cout << "2";*/

	return 0;
}
