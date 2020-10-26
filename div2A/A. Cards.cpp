#include<iostream>
#include<string>
using namespace std;
int main() {
    int n, one = 0, zero = 0;
    cin >> n;
    string str;
    cin >> str;
    if (n != str.length()) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (int(str[i]) == 122)
            ++zero;
        else if (int(str[i]) == 110)
            ++one;
    }
    while (one--) cout << "1 ";
    while (zero--) cout << "0 ";
}
