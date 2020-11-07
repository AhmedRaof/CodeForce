#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
	the km he will travel => n - 1
	we do loop n - v + 1 => because 
		in the first city he will buy all liters of capacity becuase it is cheap cost 1$
		then he will travel to next contry which burn 1 liter => he will buy it because it is cheap in second city cost 2$
		after all => it will remain liters so in city which capacity is v - 1 so they will not buy any liters
		EXAMPLE:
		10 3
		1 2 3 4 5 6 7 8 9 10
	i:  1 2 3 4 5 6 7 8 9 10 $$$
		he will buy all capacity which cost him 3$
		then in each city will buy only one liter and cost him i-th $
		when he arrives to city number 7 he will buy the last liter and then he will have 3 liters so he will not buy any thing again
*/
int main() {
	int n, v, km = 0, money = 0;
	cin >> n >> v;
	km = n - 1;

	if (km <= v) {
		cout << km;
		return 0;
	}
	for (int i = 1; i < n - v + 1; i++) {
		if (i == 1) {
			money += v;
		}
		else {
			money += i;
		}
	}
	cout << money;
	return 0;
}
