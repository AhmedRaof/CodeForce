#include<iostream>
#include<string>
using namespace std;

int checkArr(int arr[], int n) {
	return (arr[0] % 2) && (arr[n - 1] % 2) && (n % 2);
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n;i++)
		cin >> arr[i];

	if (checkArr(arr, n))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
