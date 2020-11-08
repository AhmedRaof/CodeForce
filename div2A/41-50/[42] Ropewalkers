#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int arr[3], d, temp = 0;
	cin >> arr[0] >> arr[1] >> arr[2] >> d;
	

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] >= arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << max(0, d - (arr[1] - arr[0])) + max(0, d -  (arr[2] - arr[1]));
	return 0;
}
