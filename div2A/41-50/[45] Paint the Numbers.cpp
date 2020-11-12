#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> linkedList, have;
	int temp = 0, number;

	// insert element
	for (int i = 0; i < n; i++) {
		cin >> number;
		linkedList.push_back(number);
	}

	// order them
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (linkedList[j] > linkedList[j + 1]) {
				temp = linkedList[j];
				linkedList[j] = linkedList[j + 1];
				linkedList[j + 1] = temp;
			}
		}
	}*/
	sort(linkedList.begin(), linkedList.end());
	
	for (int i = 0; i < n; i++) {
		bool flag = true;
		for (int x : have) {
			if (linkedList[i] % x == 0) {
				flag = false;
				break;
			}
		}
		//emplace_back => It is used to insert a new element into the vector container, the new element is added to the end of the vectorv
		if (flag) {
			have.emplace_back(linkedList[i]);
		}
	}

	cout << (int)have.size();

	return 0;
}
