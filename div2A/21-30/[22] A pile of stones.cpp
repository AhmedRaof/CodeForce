#include<iostream>
#include<string>
using namespace std;

/*
	SOLVE:
		n = 5
		s = ++-++
		it will rely on condition 2 if (s[0] == '+')
			result = 1
		and then go through all for loop
			s[1] = '+'			s[2] = '-'
			result = 2			result > 0 so, it will substract (result = 1)

			s[3] = '+'			s[4] = '+'
			result = 2			result = 3 -> the last answer :) 
*/

int main() {
	int n, result = 0;
	string s;

	cin >> n;
	cin >> s;

	// if the first move is '-' ,so the result = 0 
	if (s[0] == '-') {
		result = 0;
		// this loop to go throug all string
		for (int i = 1; i < n; i++) { // note that we start from index 1
			if (s[i] == '+') { // if the next element is '+' so add one to result
				result++;
			}
			else if (s[i] == '-') { // if the next element is '-'
				if (result > 0) { // if it is bigger than 0 ,so substract form it
					result--;
				}
				else if (result <= 0) { // if it is less than or equal 0 ,so make result = 0
					result = 0;
				}
			}
		}
	}

	// if the first move is '+' so, the result = 1 
	else if (s[0] == '+') {
		result = 1;
		// this loop to go throug all string
		for (int i = 1; i < n; i++) { // note that we start from index 1
			if (s[i] == '+') { // if the next element is '+' so add one
				result++;
			}
			else if (s[i] == '-') { // if the next element is '-'
				if (result > 0) { // if it is bigger than 0 ,so substract form it
					result--;
				}
				else if (result <= 0) { // if it is less than or equal 0 ,so make result = 0
					result = 0;
				}
			}
		}
	}
	cout << result << endl;
}
