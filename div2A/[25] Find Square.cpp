#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	to choose the number in the middel
		n = 9
		(n/2) = 9/2 = 4
		4 + 1 = 5 (the middel number)
*/
int main() {
	int n, m, numberOfB = 0;
	cin >> n >> m;
	int* pos_col = new int[m * n], *pos_row = new int[m * n];
	string str;
	// go through row
	for (int i = 0; i < n; i++) {
		int j = 0; // make it zero again
		cin >> str;
		// go through colum
		while (j < m) {
			// if str[j] == black
			if (str[j] == 'B') {
				numberOfB++; // it will add black
				pos_col[numberOfB] = j + 1; // save the colum position
				pos_row[numberOfB] = i + 1; // save the row position
			}
			j++;
		}
	}
	// at the last print the position of middel black (which is (n/2) + 1)
	cout << pos_row[(numberOfB / 2) + 1] << " " << pos_col[(numberOfB / 2) + 1] << endl;
}
