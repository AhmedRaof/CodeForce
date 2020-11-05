#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	EXAMPLES:
	1) a = 4, b = 0
		first get the different between a and b
		tmp = b - a = -4
		ans += tmp / 5;
			we see here how many number 5 is exist in tmp
			tmp = -4 so there is no 5 exist => ans = 0
		ans += (tmp % 5) / 2
			tmp % 5 will equal 4 and then see how many number 2 is exist in tmp
			tmp = -4 so there is two 2 exist => ans = 2
		ans += (tmp % 5 % 2) / 1
			tmp % 5 % 2 will equal 0 and then see how many number 1 is exist in tmp
			tmp = 0 so there is no 1 exist => ans still equal 2
		SOLVE => 2
	---------------------------------------------------------------------------------------

	2) a = 5, b = 14
		first get the different between a and b
		tmp = b - a = 9
		ans += tmp / 5;
			we see here how many number 5 is exist in tmp
			tmp = 9 so there is one 5 exist => ans = 1
		ans += (tmp % 5) / 2
			tmp % 5 will equal 4 and then see how many number 2 is exist in tmp
			tmp = 4 so there is two 2 exist => ans = 1 + 2 = 3
		ans += (tmp % 5 % 2) / 1
			tmp % 5 % 2 will equal 0 and then see how many number 1 is exist in tmp
			tmp = 0 so there is no 1 exist => ans still equal 3
		SOLVE => 3

	3) a = 3, b = 9
		first get the different between a and b
		tmp = b - a = 6
		ans += tmp / 5;
			we see here how many number 5 is exist in tmp
			tmp = 6 so there is one 5 exist => ans = 1
		ans += (tmp % 5) / 2
			tmp % 5 will equal 1 and then see how many number 2 is exist in tmp
			tmp = 1 so there is no 2 exist => ans = 1
		ans += (tmp % 5 % 2) / 1
			tmp % 5 % 2 will equal 1 and then see how many number 1 is exist in tmp
			tmp = 1 so there is one 1 exist => ans = 2
		SOLVE => 2
*/
int main() {
	int n, a, b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		int ans = 0, tmp = b - a;
		ans += tmp / 5;
		ans += (tmp % 5) / 2;
		ans += (tmp % 5 % 2) / 1;
		
		if (ans < 0) {
			cout << ans * -1 << endl;
		}
		else {
			cout << ans << endl;
		}
	}
	return 0;
}
