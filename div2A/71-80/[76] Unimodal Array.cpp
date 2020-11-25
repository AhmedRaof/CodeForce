#include<iostream>
#include<string>
using namespace std;
/*
	make two position
    the first one will be in zero and go through all element until the arr[n] > arr[n+1]
    the second one will be in the last element and go through all element until the arr[n] > arr[n-1]
  the check the element between must be equal
    else it will be false
*/
int main() {
	int n;
	cin >> n;
	int* arr = new int[n + 2], pos1 = 0, pos2 = n - 1;
	bool flag = true;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		if (arr[pos1] < arr[pos1 + 1])
			pos1++;
		if (arr[pos2] < arr[pos2 - 1])
			pos2--;
	}

	for (int i = pos1, j = pos2; i < pos2 && j > pos1; j--, i++) {
		if (arr[i] != arr[j] || arr[i + 1] != arr[i]) {
			flag = false;
			break;
		}
	}

	if (flag)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
