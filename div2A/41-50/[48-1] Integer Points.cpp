#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int isInt(double element) {
	if (int(element) == element)
		return true;
	else
		return false;
}

int main() {

	double t, n, m, count = 0;
	cin >> t;

	for (int k = 0; k < t; k++) {

		cin >> n;
		double* arr1 = new double[n];

		for (int i = 0; i < n; i++) {
			cin >> arr1[i];
		}

		cin >> m;
		double* arr2 = new double[m];

		for (int i = 0; i < m; i++) {
			cin >> arr2[i];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				// calculate y and x
				// if they are integer so it will meet in point integer
				// else they will be float
				//		   y =								  x =
				if ( isInt( (arr1[i] + arr2[j]) / 2 ) && isInt( (arr1[i] - arr2[j]) / 2) ) {
					count++;
				}
			}
		}

		cout << count << endl;
		count = 0;
	}
	
	return 0;
}
