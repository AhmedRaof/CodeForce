#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

int main() {
    int n, l, r, min = 0, max = 0, count = 1, k = 0;
    cin >> n >> l >> r;
    int* maxA = new int[n], *minA = new int [n];

    // calculate min possible
    // if l = 3 so we will change the last 2
    for (int i = 0; i < n; i++)
        minA[i] = 1;
    for (int i = n - (l - 1); i < n; i++) {
        count *= 2;
        minA[i] = count;
    }
    count = 1;
    // calculate max possible
    for (int i = 0; i < r; i++) {
        for (int j = i; j < n; j++) {
            maxA[j] = count;
        }
        count *= 2;
    }

    // count the array
    for (int i = 0; i < n; i++) {
        max += maxA[i];
        min += minA[i];
    }

    cout << min << " " << max;
    return 0;
}
