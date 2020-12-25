#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n, x = 0, y = 0, coins = 0; string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'U')
            y++;
        else if (s[i] == 'R')
            x++;
        if (x == y && x != 0 && s[i] == 'R' && s[i+1] == 'R' || x == y && x != 0 && s[i] == 'U' && s[i + 1] == 'U')
            coins++;
            
    }

    cout << coins;
    return 0;
}
