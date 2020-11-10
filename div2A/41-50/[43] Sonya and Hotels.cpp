#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n, d, count = 2;
	cin >> n >> d;
	int* arr = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// cout << "////////////////////////////////////////\n";
	for (int i = 0; i < n-1; i++) {
		if (abs(arr[i] - arr[i + 1]) > d * 2) {
			// cout << arr[i + 1] << " - " << arr[i] << " = " << arr[i + 1] - arr[i] << " >= " << "d*2 -> " << d * 2 << endl;
			count += 2;
			// cout << "count is: " << count << endl;
		}
		else if (abs(arr[i] - arr[i + 1]) >= d && arr[i + 1] - (arr[i] + d) >= d) {
			// cout << arr[i + 1] << " - " << arr[i] << " = " << arr[i + 1] - arr[i] << " >= " << "d -> " << d << endl;
			count += 1;
			// cout << "count is: " << count << endl;
		}
		// cout << "----------------------------------------------------\n";
	}
	cout << count;
	return 0;
}
