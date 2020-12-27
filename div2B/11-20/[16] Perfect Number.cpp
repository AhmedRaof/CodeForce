#include <iostream>
#include<vector>
#include <string>
#include<sstream>
using namespace std;

// it get the sum of digit
/*
	for example if 333
	so the ans will be 3 + 3 + 3 = 9
*/
int cal(int num) {
	int ans = 0;
	while (num) {
		ans += num % 10;
		num /= 10;
	}
	return ans;
}

int main() {
	int n, ans = 0;
	cin >> n;
	while (n) {
		ans++;
		if (cal(ans) == 10)
			n--;
	}
	cout << ans;
	return 0;
}
