#include<iostream>
#include<string>
using namespace std;
int main() {
	/*Start to get input*/
	int n, m;
	cin >> n;
	int* arrA = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arrA[i];
	}
	cin >> m;
	int* arrB = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> arrB[i];
	}
	/*finishing input*/

	/* 
		to solve this problem we can note that
		if we take the biggest number in array A
		and the biggest number in array B
		so the total will not be in either A or B
		EXAMPLE =>
		A [3 2 2] => the biggest number "3"
		B [1 5 7 7 9] => the biggest number "9"
		so the total is 3 + 9 = 12 which is not in A or B
	*/
	int bigA = arrA[0], bigB = arrB[0];

	for (int i = 0; i < n; i++) {
		if (bigA <= arrA[i]) {
			bigA = arrA[i];
		}
	}

	for (int i = 0; i < m; i++) {
		if (bigB <= arrB[i]) {
			bigB = arrB[i];
		}
	}
	
	cout << bigA << " " << bigB;

}
