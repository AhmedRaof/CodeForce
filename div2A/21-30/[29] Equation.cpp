#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	composite (n = a - b) => it has at least one divisor other than 1 and itself.
	a, b => must be composite
	EXPLAIN:
		a = 9 * n, b = 8 * n
		the different between 'a' and 'b' is 'n'
		WHY WE CHOOSE 9 AND 8:
			1, 2, 3, 4, 5, 6, 7, 8, 9
			we must choose a = n, b = n - 1 && the number is composite
			b and a
			1 and 2 => we cann't choose 1 as all number accept divisor by 1
			2 and 3 => 3 and 2 is not composite		false
			3 and 4 => 3 is not composite			false
			4 and 5 => 5 is not composite			false
			5 and 6 => 5 is not composite			false
			6 and 7 => 7 is not composite			false
			7 and 8 => 7 is not composite			false
			8 and 9 => 8 and 9 is compoiste number	true
		
*/
int main() {
	int n;
	cin >> n;
	cout << 9 * n << " " << 8 * n;

	/*int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		// if the number accept devisior
		/* NOTE: it will calculate 1 and the number,
		         you have to skip it */
		// because we skip 1 and the number itself
		// NOTE: all number accept divisor 1 and the number itself
		/*if (n % i == 0) {
			count++;
		}
		if (count > 2) {
			cout<<"YES";
		} else {
			cout<<"NO";
		}
	}*/
}
