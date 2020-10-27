#include<iostream>
#include<string>
using namespace std;
int main() {

	// Grick gave Willem a string of length n
	// Willem needs to do m operations
	// each operation has four parameters l, r, c1, c2
	// which means that all symbols c1 in range [l, r] (from l-th to r-th, including l and r) are changed into c2
	// the index starting from 1

	int n, m, l, r;
	string s;
	char c1, c2;
	
	cin >> n >> m;
	cin >> s;

	if (n != s.length()) {
		return 0;
	}

	// loop will go m operation
	for (int i = 0; i < m; i++) {
		cin >> l >> r >> c1 >> c2;
		if (l == r && s[l - 1] == c1) {
			s[l - 1] = c2;
			// cout << "result after if condition => " << s << endl;
		}
		
		else {
			for (int j = l; j <= r; j++) {
				
				if (s[j - 1] == c1) {
					s[j - 1] = c2;
					// cout << "result after else condition => " << s << endl;
				}
				
			}

		}
	}

	cout << s;

}
