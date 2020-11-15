#include<iostream>
#include<cmath>
using namespace std;

/*
	Idea: Search from 1 to n once, each time searching from the current i (1<=i<=n) to n, 
	skipping ignore when it is k, the rest is 1 e++, -1 is s++, Each i will find a |es|,
	which can be compared with max. Note that i should also search forward.
	When it finds multiples of k, it is ignored. The rest is 1 for e++, and -1 for s++.
*/

int main()
{
	int n, k, a[105], e = 0, s = 0, max = 0, i, j, t;
	cin >> n >> k;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = i - 1; j >= 1; j--)
		{
			if ((i - j) % k != 0)
			{
				if (a[j] == 1)
					e++;
				else
					s++;
			}
		}
		for (j = i; j <= n; j++)
		{
			if ((j - i) % k != 0)
			{
				if (a[j] == 1)
					e++;
				else
					s++;
			}
		}
		t = abs(e - s);
		if (t > max)
		{
			max = t;
		}
		e = 0;
		s = 0;
	}
	cout << max << endl;
}
