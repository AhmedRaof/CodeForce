#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {

	/*
		i take every k number of alphabet 
			1- ckeck for the condition of alphabet
				only two position after the position of letter
			2- take the smallest weight
		if the condition dosen't satisfy so OUTPUT "-1"
	*/
	int n, k;
	cin >> n >> k;

	char temp = ' ';
	string str;

	cin >> str;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (str[j] >= str[j + 1]) {
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
	// sort(str.begin(), str.end());
	
	int len = 0, ans = 0;
	char last = 'a' - 2;

	for(int i = 0; i < n; i++) {
		if (str[i] >= last + 2) {
			last = str[i];
			/*
				'a' in ASCII code is 97
					we do this step to caculate the position of number in alphabet
			*/
			ans += str[i] - 'a' + 1;
			len++;
			if (len >= k) {
				cout << ans;
				return 0;
			}
		}
	}
	
	cout << -1;
	return 0;
}
