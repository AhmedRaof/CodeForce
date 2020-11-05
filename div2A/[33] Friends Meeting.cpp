#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	| | | | | | | |
	3 4 5 6 7 8 9 10
	EXAMPLE =>
	a = 3, b = 10
	len = 7 which is odd number
	a will move:
		from 3 to 4 (), from 4 to 5, from 5 to 6
	b will move:
		from 10 to 9, from 9 to 8, from 8 to 7
													*they didn't meet yet*
	so a will move another step from 6 to 7 => they are not move the same steps so we have to add 4 which is (len/2)+1
	so the final result = 1 + 2 + 3 + 1 + 2 + 3 + '(len/2)+1 = 4' = 16
	we can calculate all number from 1 to n with this expression
		n * (n+1) / 2
		we do that
		n /= 2
		n * (n+1) + n + 2
	EXAMPLE =>
	| | | | | | |
	4 5 6 7 8 9 10
	a = 4, b = 10
	len = 6 which is even number
	a will move:
		from 4 to 5, from 5 to 6 from 6 to 7
	b will move:
		from 10 to 9, from 9 to 8, from 8 to 7
												they will move the same steps because they are even *a and b meet*
	so the final result 1 + 2 + 3 + 1 + 2 + 3 = 12 
	or 
	len /= 2
	result = len * (len + 1) = 3 * (3 + 1) = 3 * 4 = 12
*/
int main() {
	int a, b;
	cin >> a >> b;
	// abs => absolute value "if the substraction is minus it will make it positive"
	int n = abs(a - b);
	if (n % 2 == 0) {
		n /= 2;
		cout << n * (n + 1) << endl;
	}
	else {
		n /= 2;
		cout << n * (n + 1) + 1 + n << endl;
	}
	return 0;
}
