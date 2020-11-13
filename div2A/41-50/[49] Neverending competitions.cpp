#include<iostream>
#include<string>
using namespace std;
int main() {
	
	int n;
	cin >> n;
	string home;
	cin >> home;
	string* arr = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (n % 2 == 0) {
		cout << "home";
	}
	else {
		cout << "contest";
	}
	return 0;
}
