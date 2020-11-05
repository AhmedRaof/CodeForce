#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	// cal [26] => the number of latin alphabet
	// cal [26] = {0} ---- make all number equal zero
	int n, k, cal[26] = {0}, result;
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", str;
	cin >> n >> k;
	cin >> str;
	/* this loop to calculate the number of repeated alphabet
	   for example ACAABCCAB
	   A repeated 4
	   B repeated 2
	   C repeated 3
	*/
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (alpha[i] == str[j]) {
				cal[i]++;
			}
		}
	}
	// make result equal the first number of cal
	result = cal[0];
	// we want to get the less alphabet that repeated
	for (int i = 0; i < k; i++) {
		result = min(result, cal[i]);
	}
	cout << result * k;
	return 0;
}
