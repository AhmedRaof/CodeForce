#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {

	int w, h, u1, d1, u2, d2;
	cin >> w >> h;
	cin >> u1 >> d1;
	cin >> u2 >> d2;

	int ans = w;

	for (int i = h; i >= 0; i--) {
		ans += i;
		if (i == d1) {
			ans -= u1;
		}
		else if (i == d2) {
			ans -= u2;
		}
		if (ans < 0) {
			ans = 0;
		}
	}

	cout << ans << endl;

	return 0;
}
