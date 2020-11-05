#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	n => is the number of letter in his name
	"O" => if 'i' is a member of fibonacci sequence
		NOTE: fibonacci sequence =>
			0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ...
	"o" => otherwise
			Fibonacci sequence is the sequence f where
				f1 = 1,
				f2 = 1,
				fn = fn - 2 + fn - 1 (n > 2). => the i is a member of fibonacci sequence
*/

// we do a function to store all fibonacci number in array
int fibonacci(int n) {
	// because if we do n - 2 and n = 1 => it will be minus number
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	// flag => to make a check
	int n, flag = 0;
	cin >> n;
	// store all fibonacci number:
	// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ...
	int arr[20] = { 0 };
	for (int i = 0; i < 20; i++) {
		arr[i] = fibonacci(i);
	}

	// go throug all n (if n = 8 it will go 1, 2, 3, ...)
	for (int i = 1; i <= n; i++) {
		flag = 0;
		if (i == 1 || i == 2) {
			cout << "O";
			flag = 1;
		}
		else {
			for (int j = 1; j <= 17; j++) {
				// if i is a member of fibonacci sequence
				if (arr[j] == i) {
					cout << "O";
					flag = 1;
				} 
			}
		}
		// if the first and seconde condition didn't happened 
		if (flag == 0) {
			cout << "o";
		}
	}
}
