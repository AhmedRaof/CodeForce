#include<iostream>
#include<string>
using namespace std;

bool check(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == s[i + 1] && i < s.length() - 1 && s[i] != '?') {
			return true;
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	string str;

	while (n--) {

		cin >> str;
		int l = str.length();
		
		// compare if there is any duplicated element
		if (check(str)) {
			cout << "-1" << endl;
		}
		else {
			for (int i = 0; i < l; i++)
				if (str[i] == '?' )
					for (int j = 'a'; j <= 'c'; j++)
						if (j != str[i - 1] && j != str[i + 1])
							str[i] = j;
			for (int i = 0; i < l; i++)
				cout << str[i];
			cout << endl;
		}
	}
	return 0;
}

 
