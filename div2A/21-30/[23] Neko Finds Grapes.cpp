#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	we know:
		Even + Even = Even
		Odd + Odd = Odd
		Even + Odd = Odd
		=> so we will compare the odd and even in chest and key
			compare Odd_Chest With Even_Key
			compare Odd_Key with Even_Chest
*/
int main() {
	/*At first entering data*/
	int n, m, max = 0, odd_chest = 0, odd_key = 0, even_chest = 0, even_key = 0;
	cin >> n >> m;
	int* chest = new int[n], * key = new int[m];
	for (int i = 0; i < n; i++) {
		cin >> chest[i];
		if (chest[i] % 2 == 0) {
			even_chest++;
		}
		else {
			odd_chest++;
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> key[i];
		if (key[i] % 2 == 0) {
			even_key++;
		}
		else {
			odd_key++;
		}
	}
	/*
		it will take the smallest odd or even 
		(it first number is even the another number is odd)
		because the result must be 'odd' = even + odd
	*/
	cout << min(odd_key, even_chest) + min(odd_chest, even_key);
}

/*
PROBLEM => TIME

int main() {
	
int n, m, max = 0, big = 0;
cin >> n >> m;
int* chest = new int[n], * key = new int[m];
for (int i = 0; i < n; i++) {
	cin >> chest[i];
	if (chest[i] >= big) {
		big = chest[i];
	}
}
for (int i = 0; i < m; i++) {
	cin >> key[i];
}

for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		if ((key[j] + chest[i]) % 2 == 1) {
			max++;
			key[j] = -1 * big;
			break;
		}
	}
}
cout << max;
}
*/
