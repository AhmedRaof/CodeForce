#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	float n;
	cin >> n;

	float *numOfArr = new float[n];
	float theNumberOfPos = ceil(n / 2), positave = 0, negitave = 0;

	for (int i = 0; i < n; i++) {
		cin >> numOfArr[i];
		if (numOfArr[i] > 0) {
			positave++;
		}
		if (numOfArr[i] < 0) {
			negitave++;
		}
	}
	
	if (theNumberOfPos <= positave) {
		cout << "1";
	}
	else if (theNumberOfPos <= negitave) {
		cout <<"-1";
	}
	else {
		cout << "0";
	}
	return 0;
}
