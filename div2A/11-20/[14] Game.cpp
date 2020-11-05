#include<iostream>
#include<string>
using namespace std;
int main() {

	// n => the number of numbers on board
	/*
		The first player wants to minimize the last number that would be left on the board =>
			so the first player will remove the biggest number
		while the second player wants to maximize it =>
			so the second player will remove the smallest number
	*/
	int n, small, big, positionBig, positionSmall;
	cin >> n;
	int* arr = new int[n];

	// enter the numbers
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // to write all data only on one line
	}

	/*
		Input:
		9
		44 53 51 80 5 27 74 79 94
		Sequence:
		first player => will search for the biggest number and remove it which is "94"
		44 53 51 80 5 27 74 79
		second player => will search for the smallest number and remove it which is "5"
		44 53 51 80 27 74 79
		first player => will search for the biggest number and remove it which is "80"
		44 53 51 27 74 79
		second player => will search for the smallest number and remove it which is "44"
		53 51 27 74 79
		first player => will search for the biggest number and remove it which is "79"
		53 51 27 74
		second player => will search for the smallest number and remove it which is "27"
		53 51 74
		first player => will search for the biggest number and remove it which is "74"
		53 51
		second player => will search for the smallest number and remove it which is "51"
		53
		Answer:
		53
	*/
	int i = 0;
	// it will loop until n = 1, so if we n-- it will be zero and the loop stop
	while (n > 0) {
		big = arr[0], small = arr[0]; // make big and small equal first value of array => NOTE: we put it inside array because the value of array is change
		
		// the turn of first player
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) { // get the biggest number and the position
				if (arr[j] >= big) {
					big = arr[j];
					positionBig = j;
				}
			}
			for (int x = positionBig; x < n - 1; x++) { // remove that number from array
				arr[x] = arr[x + 1];
			}
			// cout << "player 1" << endl;
		}

		// the turn of second player
		if (i % 2 != 0) { // get the smallest number and the position
			for (int j = 0; j < n; j++) {
				if (arr[j] <= small) {
					small = arr[j];
					positionSmall = j;
				}
			}
			for (int x = positionSmall; x < n - 1; x++) { // remove that number from array
				arr[x] = arr[x + 1];
			}
			// cout << "player 2" << endl;
		}
			
		
		/*for (int y = 0; y < n; y++) {
			cout << arr[y] << endl;
		}
		cout << "-------------------------------------\n";*/

		n--;
		i++;
	}
	
	cout << arr[0];
	
}
