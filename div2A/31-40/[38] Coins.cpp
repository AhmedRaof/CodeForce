#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	// ceil() => Return the smallest integer value that is greater than or equal to s / n
	// cout << ceil(s / n);	// the type of number must be float
	cout << (s + n - 1) / n;
	return 0;
}
