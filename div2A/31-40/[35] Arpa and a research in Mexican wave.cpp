#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	At time 1, the first spectator stands.
	At time 2, the second spectator stands.
	...
	At time k, the k-th spectator stands.
	At time k + 1, the (k + 1)-th spectator stands and the first spectator sits.
	At time k + 2, the (k + 2)-th spectator stands and the second spectator sits.
	...
	At time n, the n-th spectator stands and the (n - k)-th spectator sits.
	At time n + 1, the (n + 1 - k)-th spectator sits.
	...
	At time n + k, the n-th spectator sits.
*/
int main() {
	int n, k, T;
	cin >> n >> k >> T;
	if (T >= 0 && T <= k) {
		cout << T;
	}
	else if (T > k && T < n) {
		cout << k;
	}
	else if (T >= n && T <= n + k) {
		cout << n - (T - k);
	}

	/*
	int n, k, T, i = 0, t = -1, spectators = -1;
	cin >> n >> k >> T;
	while (i <= n + k) {
		if (t < k) {
			t++;
			spectators++;
			// cout << t << " " << spectators << endl;
		}
		else if (t >= k && t < n) {
			t++;
			// cout << t << " " << spectators << endl;
		}
		else if (t >= n && t <= n + k) {
			t++;
			spectators--;
			// cout << t << " " << spectators << endl;
		}
		if (T == t) {
			cout <<  spectators;
			break;
		}
		i++;
	}*/

	/*int n, k, T;
	char wave;
	cin >> n >> k >> T;
	int t = 0;
	while (t <= n + k) {

		int count = t, end = 1, spectators = 0, temp = 0;
		int j = 1;
		// cout << "At t = " << t << " ";
		while (j <= n) {
			if (count == 0) {
				wave = '-';
			}
			else if (count > 0 && count <= k) {
				wave = '^';
				count--;
				spectators++;
			}
			else if (count > k && count <= n) {
				wave = '-';
				wave = '^';
				count--;
				temp++;
			}
			else if (count > n && count <= n + k) {
				wave = '-';
				end++;
				count--;
				spectators = temp;
			}
			else {
				wave = '-';
			}
			// cout << wave;
			j++;
		}
		//cout << " number of standing spectators = " << spectators << endl;
		if (T == t) {
			cout << spectators;
		}
		t++;
	}*/
	return 0;
}
