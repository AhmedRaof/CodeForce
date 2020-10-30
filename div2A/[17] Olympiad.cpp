#include<iostream>
#include<string>
using namespace std;
int main() {

	/*
		n => number of participants
		the next line => participants' scores
		Note that participants with zero scores cannot get anything
	*/

	/*
		Input:
		4
		1 3 3 2
		Processing:
		1) see the largest number which is 3
		   then compare it with all scores if(3<=socres) he will get diploma
		2) see the next number wich is smaller than 3 but not the smallest which is 2
		   then compare it with all scores if(2<=socres) he will get diploma
		3) see the smallest number but it must not eauql zero which is 1
		   "all will get diploma"
		Output:
		3
		NOTES => we count all scores but not claculate zero
	*/

	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	/*
		count => using it to calculate all number bigger than 0
				---but there is problem that it will also add the repeated number---
		equal => it will calculate the repeated number
	*/
	int count = 0, equal = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			count++;
		}
		// we start j from next index not from 0
		for (int j = i+1; j < n; j++) {
			// example [1, 3, 3, 2] equal will be 1 --- count will be 4 => result 3
			// example [1, 1, 1, 1] equal will be 3 --- count will be 4 => result 1
			if (arr[i] == arr[j] && arr[i] != 0) {
				equal++;
				break;
			}
		}
		
	}

	cout << count - equal;
}
