#include<iostream>
#include<string>
using namespace std;

// if the man in the same tower function
void moveFloor(int& fa, int& fb, int& min) {
	min += abs(fa - fb);
	fa = fb;
}

int main() {
	int n, h, a, b, k, ta, fa, tb, fb, min;
	cin >> n >> h >> a >> b >> k;

	for (int i = 0; i < k; i++) {
		min = 0;
		cin >> ta >> fa >> tb >> fb;
		// if the man is in the same tower
		if (ta == tb) {
			moveFloor(fa, fb, min);
			cout << min << endl;
		}
		else if (fa >= a && fa <= b) {
			cout << abs(fa - fb) + abs(ta - tb) << endl;
		}
		else {
			// go to the neares bridges
			if (abs(fa - b) >= abs(fa - a)) { // it is nearest to lower bridge
				min += abs(fa - a);
				fa = a;
			}
			else { // it is nearest to higher bridge
				min += abs(fa - b);
				fa = b;
			}
			// go to the tower
			min += abs(ta - tb);
			ta = tb;
			// now man is in the same floor
			if (ta == tb) {
				moveFloor(fa, fb, min);
			}
			cout << min << endl;
		}
	}
	return 0;
}

 
