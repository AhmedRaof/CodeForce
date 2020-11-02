#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	n => the number of sticks drawn by sasha
	k => the number of sticks to be crossed out on each turn
*/
/*
		if n = 3, k = 1;
		there is three sticks
		in each role played we take one 'k' out
		so rolePlayed = 3 / 1 = 3 // the number of played ethier sasha or lein
		EXPLAIN:
			first sasha take one stick => 'n = 1' roleOfSash = 1
			then lein take another one => 'n = 2' roleOfLein = 1
			then sash take another one -> 'n = 3' roleOfSash = 2
							Sash Win "YES"
		------------------------------------
		if n = 7, k = 3;
		there is three sticks
		in each role played we take three 'k' out
		so rolePlayed = 7 / 3 = 2 // the number of played ethier sasha or lein
		EXPLAIN:
			first sasha take three stick => 'n = 3' roleOfSash = 1
			then lein take another three => 'n = 3' roleOfLein = 1
							the stick FINISHED
								Sash Lose "NO"
	*/
int main() {
	// we use long long => to store a big number
	// (because of error in test 3)
	long long n, k, rolePlayed;

	cin >> n >> k;
	
	rolePlayed = n / k;

	if (rolePlayed % 2 == 0) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
}
