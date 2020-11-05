#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int result = 0;
	string str;
	cin >> str;
	// go throug string
	for (int i = 0; i < str.length(); i++) { // for loop start from i = 0
		if (str[i] == 'Q') { // if equal 'Q'
			for (int j = i; j < str.length(); j++) { // for loop start from j = i
				if (str[j] == 'A') { // if equal 'A'
					for (int k = j; k < str.length(); k++) { // for loop start from k = j
						if (str[k] == 'Q') { // if equal 'Q'
							result++;
						}
					}
				}
			}
		}
	}
	cout << result;
}
