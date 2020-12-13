#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    long long n, d, e, ans = 0;
    cin >> n >> d >> e;
    ans = n;
    for (int i = 0; i * 5 * e <= n; ++i) {
        ans = min(ans, (n - i * 5 * e) % d);
    }
    cout << ans;
    return 0;
}
