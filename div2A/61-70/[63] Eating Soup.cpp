#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	cout << (m ? min(n - m, m) : 1);

	return 0;
}
