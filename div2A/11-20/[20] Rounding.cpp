#include<iostream>
#include<string>
using namespace std;
int main() {
	// n > 5 => so we will add
	// n < 5 => so we will Subtract
	/*
		first we want to get the last digit in the number
		so, we will do that => num % 10
		(NOTE: if we want to get the last digit we will => num / 10
		       untill it is smaller than 10 "For Loop")
		(NOTE: if we want to get the last two digit we will do num % 100)
	*/
	int n, lastDigit = 0;
	cin >> n; // enter the number for example 5432359
	lastDigit = n % 10; // calculate the last digit number which is 9
	if (lastDigit < 5) { // if the number is smaller than 5
		while (n % 10 != 0) { 
			n--; // it will substract until the last number became 0
		}
	}
	if (lastDigit >= 5) { // if the number is bigger than or equal 5
		/*
			5432359 % 10 = 9 ----- it will add 1 to the n
			5432360 % 10 = 0 ----- so the result is 5432360
		*/
		while (n % 10 != 0) {
			n++;
		}
	}
	cout << n;
}
