#include<iostream>
#include<string>
using namespace std;
int main() {
	// n => is the number of friend
	/*
		one invitation need:
			two red sheets
			five green sheets
			eight blue sheets
	*/
	// but each notebook consists of only one color with k sheets
   // Find the minimum number of notebooks that Petya needs to buy to invite all n of his friends.
	int n, k, red = 0, green = 0, blue = 0;
	cin >> n >> k;

	while (k * red <= n * 2) {
		red++;
		if (k * red == n * 2) {
			break;
		}
	}

	while (k * green <= n * 5) {
		green++;
		if (k * green == n * 5) {
			break;
		}
	}

	while (k * blue <= n * 8) {
		blue++;
		if (k * blue == n * 8) {
			break;
		}
	}
	cout << blue + green + red;
}
