#include<iostream>
#include<string>
using namespace std;
int main() {
	
	int n, a, b, c, d, thomas = 0, tempDEG, tempID;
	cin >> n;
	int* arr = new int[n], *position = new int[n], * id = new int[n];
	// this loop to enter all data on array
	for (int i = 1; i <= n; i++) {

		cin >> a >> b >> c >> d;
		// to store the total degree of thomas which is the first data that entered
		if (thomas == 0) {
			thomas = a + b + c + d;
		}
		// store all data => we use i-1 because i start from 1
		arr[i-1] = a + b + c + d;
		position[i-1] = i;
		id[i - 1] = i;
	}

	// this loop to Arranges the total degree 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			
			if (arr[j] < arr[j + 1]) {
				tempDEG = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tempDEG;

				// we use id because if thomas and another degree are equal so we can get the degree of thomas from id
				// we will change the positoin of id also when the positon of degree change
				tempID = id[j];
				id[j] = id[j + 1];
				id[j + 1] = tempID;
			}
			


			tempDEG = 0;
			tempID = 0;
		}
	}

	
	for (int i = 0; i < n; i++) {
		// if arr equla thomas total degree and the id == 1
		if (arr[i] == thomas && id[i] == 1) {
			cout<< position[i];
		}
	}
	thomas = 0;
}
