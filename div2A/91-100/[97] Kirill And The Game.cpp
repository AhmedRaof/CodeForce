#include<iostream>
#include<vector>
#include<string>
using namespace std;

/*
    k = exp / cost 
        so that we can see "exp = k * cost
*/

int main() {
    long long l, r, x, y, k;
    bool flag = 0;
    cin >> l >> r >> x >> y >> k;

    // make i go through all cost from x to y
    for (long long i = x; i <= y; i++)
        // i * k = k * cost = exp
        if (l <= (i * k) && r >= (i * k)) // the value of exp is between l and r "l <= exp <= r"
            flag = 1;

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
