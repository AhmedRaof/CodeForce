#include <iostream>
#include<string>
#include<set>
using namespace std;

const int mxn = 1e5 + 10;
int n, m, k, ans, col, t, flag, a[mxn], b[mxn], cnt;

int main(void)
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        flag = 0;
        m = 0;
        cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            a[i] = k - a[i];
            if (a[i] != 0)
                b[m++] = i;
            if (a[i] > 0) cnt = a[i];
            if (a[i] < 0)
                flag = 1;
        }
        if (flag)
            cout << "NO" << endl;
        else
        {
            if (a[b[0]] != cnt && m != 0) flag = 1;
            for (int i = 1; i < m; i++)
            {
                if (b[i] - b[i - 1] != 1 || a[b[i]] != cnt || a[b[i - 1]] != cnt)
                {
                    flag = 1; break;
                }
            }
            if (flag)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}
