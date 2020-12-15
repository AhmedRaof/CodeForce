#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*
    even + even = even
    odd + odd = even
    even + odd = odd
*/
int main() {
    int a, b, c, d, i = 0, Rick[100], Morty[100];
    cin >> a >> b >> c >> d;

    // else
    while (i < 100) {
        Rick[i] = b + a * i;
        Morty[i] = d + c * i;
        i++;
    }
    for(int i=0;i<100;i++)
        for (int j = 0; j < 100; j++)
            if (Rick[i] == Morty[j]) {
                cout << Rick[i];
                return 0;
            }

    cout << "-1";
    return 0;
}
