#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	to know if they are multiple of n or not FOR EXAMPLE n = 3
	26(any number choosen) % 3 = 2 (if it is != 0) so the number is not multiple of n
	18 % 3 = 0 (if it is == 0) so the number is multiple of n
*/
int main() {
	int n, a = 0, b = 0, c = 0;
	cin >> n;
	/*
		make the a and b '1' so,
			they aren't multiple of 3
			so the C will be n - 2 (2 came from 1 i added to A and B)
	*/
	a = b = 1; 
	c = n - 2;
	if (c % 3 != 0) // true => so C will be not multiple of 3
		cout << a << " " << b << " " << c;
	else // false => so C will be multiple of 3
		/*
			i will add '1' to A so, it became 2 (not multiple of 3)
		s	minus '1' from C so, it became not multiple of 3
		*/
		cout << a + 1 << " " << b << " " << c - 1;
}
