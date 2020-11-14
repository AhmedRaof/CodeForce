#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	int n, temp = 0, sumF = 0, sumL = 0;
	cin >> n;

	long long int* arr = new long long int[n * 2];

	for (int i = 0; i < n*2; i++)
		cin >> arr[i];

	for (int i = 0; i < n * 2; i++) {
		for (int j = 0; j < n * 2 - 1; j++) {
			if (arr[j] <= arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		sumF += arr[i];
	for (int i = n; i < n * 2; i++)
		sumL += arr[i];
	
	if (sumF == sumL)
		cout << "-1";
	else
		for (int i = 0; i < n * 2; i++)
			cout << arr[i] << " ";

	return 0;
}
