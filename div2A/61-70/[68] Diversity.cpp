#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	int k, diffLetter = 0;
	bool flag;
	cin >> s >> k;
	if (s.length() < k) {
		cout << "impossible\n";
		return 0;
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			flag = true;
			for (int j = i+1; j < s.length(); j++) {
				if (s[i] == s[j]) {
					flag = false;
				}
			}
			// calculate the number of different letter
			if (flag)
				diffLetter++;
		}
	}

	cout << max(0, k - diffLetter);
	return 0;
}

 
