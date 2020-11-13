#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	
	long long int n, totalV = 0, canMax = 0;
	cin >> n;
	long long int* volume = new long long int[n], * capacity = new long long int[n];

	for (long long int i = 0; i < n; i++) {
		cin >> volume[i];
		totalV += volume[i];
	}

	for (long long int i = 0; i < n; i++)
		cin >> capacity[i];

	sort(capacity, capacity + n);
	canMax = capacity[n - 1] + capacity[n - 2];
	
	if (canMax >= totalV) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}
