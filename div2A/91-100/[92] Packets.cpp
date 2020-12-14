#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    while (n) { // if n == 0 it will exist
        ans++; // and packets
        n = floor(n / 2); // divided to 2 and get the floor(5 / 2) = 2
    }
    cout << ans;
    return 0;
}
