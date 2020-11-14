#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	long long int n, counter = 0, min, max;
	cin >> n;
	long long int* arr = new long long int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	max = min = arr[0];
	
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (min < arr[i] && max > arr[i]) {
			counter++;
		}
	}

	cout << counter;

	return 0;
}
