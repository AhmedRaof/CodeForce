#include<iostream>
#include<string>
#include<algorithm>

#define ll long long
using namespace std;

const int maxx = 1e3 + 100;
string s[maxx];
int a[maxx];
int x[maxx];
int n, m;

int main()
{
	while (~scanf("%d%d", &n, &m))
	{
		for (int i = 1; i <= n; i++) cin >> s[i];
		for (int i = 1; i <= m; i++) cin >> a[i];
		int ans = 0;
		for (int i = 0; i < m; i++)
		{
			memset(x, 0, sizeof(x));
			for (int j = 1; j <= n; j++)
			{
				x[s[j][i] - 'A']++;
			}
			int _max = 0;
			for (int j = 0; j <= 5; j++) _max = max(_max, x[j]);
			ans += _max * a[i + 1];
		}
		cout << ans << endl;
	}
}
