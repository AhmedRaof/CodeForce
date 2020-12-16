#include<iostream>
using namespace std;

#define N 2200
bool map[2200000];
int a[N], b[N], n;

int main() {

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i],
        map[a[i]] = 1;
    for (int i = 1; i <= n; ++i)
        cin >> b[i],
        map[b[i]] = 1;

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (map[a[i] ^ b[j]])
                ans++;
    if
        (ans % 2) cout << "Koyomi";
    else
        cout << "Karen";
    return 0;
}


