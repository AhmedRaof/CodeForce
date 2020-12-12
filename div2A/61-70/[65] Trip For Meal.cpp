#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

const int max = 1e5 + 10;

int main()
{
    int n, a, b, c, x;
    cin >> n >> a >> b >> c;
    x = min(a, min(b, c));
    if (x == a || x == b || n == 1)
        cout << (n - 1) * min(a, b) << endl;
    else
        cout << ((n - 2) * c) + min(a, b);
    return 0;
}
