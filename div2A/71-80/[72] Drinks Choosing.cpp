#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdio.h>
using namespace std;

//{
#define fr(n) for(int i=0;i<n;i++) // this to enter variable into array
constexpr auto mx = 10000; // to make an arry of mx;
typedef long long ll;
//}

int main() {
	ll numberStudent, k, arr[mx], save[mx];
	cin >> numberStudent >> k;

	fr(numberStudent) {
		cin >> arr[i];
		// ^ => mean XOR 
		save[arr[i]] ^= 1;
	}

	ll odd = 0;
	for (ll i = 1; i <= k; i++) {
		if (save[i] && 1)odd++;
	}

	cout << numberStudent - odd / 2 << endl;
	return 0;
}

