#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int l, r, a, team_R = 0, team_L = 0;
	int res;
	cin >> l >> r >> a;
	team_R = r;
	team_L = l;
	while (team_R != team_L) {
		while (team_R > team_L) {
			if (a > 0) {
				team_L += 1;
				a--;
			}
			else {
				team_R--;
			}
		}
		while (team_R < team_L) {
			if (a > 0) {
				team_R += 1;
				a--;
			}
			else {
				team_L--;
			}
		}
	}
	if (team_R == team_L) {
		a /= 2;
		team_R += a;
		team_L += a;
	}
	else {
		cout << "0";
		return 0;
	}
	cout <<team_R + team_L;
	return 0;
}
