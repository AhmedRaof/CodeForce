#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdio.h>

//{
#define fr(n) for(int i=0;i<n;i++) // this to enter variable into array
typedef long long ll;
//}

using namespace std;
int main() {
	/*
		two pockets
			she only can put k pebbles in each pocket at the same time
		n type of pebbles
			only type with each others in the pocket
		CAL THE NUMBER OF DAYS ????
	*/
	ll n, k, days;
	cin >> n >> k;
	ll* arr = new ll[n];
	fr(n)
		cin >> arr[i];

	ll j = 0, test = 0;
	bool flag = false;
	for (days = 1; days < 10000000000000000000; days++) {
		ll p1 = k, p2 = k;
		if (p1 >= arr[j] && arr[j] > 0) {
			arr[j] -= p1;
			if (j < n - 1) {
				arr[j + 1] -= p2;
				if (arr[j + 1] <= 0)
					flag = true;
			}
		}

		else if (p1 <= arr[j] && arr[j] > 0)
			arr[j] -= (p1 + p2);

		if (arr[j] <= 0 && !flag) {
			test++;
			j++;
		}
		else if (arr[j] <= 0 && flag) {
			test += 2;
			j += 2;
		}

		if (n == test) {
			cout << days;
			return 0;
		}
		flag = false;
	}

	return 0;
}

/*---------------------------------------------------------------------OR-------------------------------------------------------------------------*/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
	int n, k, arr, sum = 0;
	cin >> n >> k;

	while (n--) {
		cin >> arr;
		sum += (arr + k - 1) / k;
	}

	cout << (sum + 1) / 2;
	return 0;
}
