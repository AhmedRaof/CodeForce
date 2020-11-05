#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 /*
	We call a love triangle a situation in which plane A likes plane B, plane B likes plane C and plane C likes plane A.
	EXAMPLE:
		5
		2 4 5 1 3
		plane 2 likes plane 4, plane 4 likes plane 1, plane 1 likes plane 2 and that is a love triangle.
		if we see the index of 2 - 1 / 4 - 2 / 1 - 4
		so the result we get is (arr[arr[arr[i]]] == i) => so the plane love triangle

 */
int main() {
	int n;
	int flag = 0;
	cin >> n;
	// n + 1 => because of run time error
	int* arr = new int[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		if (arr[arr[arr[i]]] == i) {
			flag++;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
