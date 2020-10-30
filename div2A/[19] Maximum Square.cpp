#include<iostream>
#include<string>
using namespace std;
int main() {
	int k, n, temp = 0, size = 0;
	cin >> k;

	// loop to enter the number of test
	for (int i = 0; i < k; i++) {
		cin >> n;
		int* arr = new int[n]; // define new array
		for (int j = 0; j < n; j++) { // loop to enter the data of array
			cin >> arr[j];
		}
		for (int k = 0; k < n; k++) { // loop to order the number in array
			for (int z = 0; z < n - 1; z++) {
				if (arr[z] < arr[z + 1]) {
					temp = arr[z];
					arr[z] = arr[z + 1];
					arr[z + 1] = temp;
				}
			}
		}
		/*
			for example we have 5 4 4 3 1
				the n of number is "5"
				the number in array - the n of number of boxes
				1 - 5 >= 0 false
				3 - 4 >= 0 false
				4 - 3 >= 0 true 
				so the number of square are 3
		----------------------------------------
			for example we have 5 5 5 1 1
				the n of number is "5"
				1 - 5 >= 0 false
				1 - 4 >= 0 false
				5 - 3 >= 0 true 
				so the number of square are 3
		*/
		size = n;
		for (int c = n-1; c >= 0; c--) {
			if (arr[c] - size >= 0) {
				cout << size << endl;
				break;
			}
			else {
				size--;
			}
		}
		
	}
}
