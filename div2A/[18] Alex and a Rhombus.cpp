#include<iostream>
#include<string>
using namespace std;
/*
	This problem has a regular formula. First you count the outermost layer has how many squares.
	Then the second outermost layer. Until the second smallest layer. So we add them up. 
	Imagine we have a n−th order rhombus in a cell grid. The n−th rhombus has n−1 layers.
	So the total square except the center square is:
									(4n−4)+(4(n−1)−4)+⋯+2×4−4
										=4(n−1+n−2+⋯+1)
											=2×(n−1)n
	So the final answer is 2×(n−1)n+1 .
*/
int main() {
	int n;
	cin >> n;
	cout << 2 * n * (n - 1) + 1 << endl;
	return 0;
}
