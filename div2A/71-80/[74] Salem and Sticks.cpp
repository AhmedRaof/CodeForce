#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdio.h>
using namespace std;

int n;
int arr[100000];

int theMinimumPossibleCost(int t) {
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == t)
			continue;
		else
			ans += abs(t - arr[i]) - 1;
	}
	return ans;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int theValueOfT = 0, possibleCost = 100000;
	for (int i = 1; i < 100; i++) {
		int cost = theMinimumPossibleCost(i);
		if (possibleCost > cost) {
			theValueOfT = i;
			possibleCost = cost;
		}
	}

	cout << theValueOfT << " " << possibleCost;
	return 0;
}

