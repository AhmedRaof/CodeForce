#include<iostream>
using namespace std;

#define cel(n,k) ( (n-1)/k + 1 )

int main() {
    long long ans, n, m, k, l;
    cin >> n >> m >> k >> l;

    // if number of friend is bigger than different collectible conins
    // all conis gift from altogether + the coins Ivan have > different collectible conins
    if (n<m || (l + k)>n) {
        cout << "-1";
        return 0;
    }

    ans = cel(l + k, m);

    // if some of friends not able to gift
    if (m * ans > n)
        cout << "-1";
    else
        cout << ans;
    return 0;
}
