#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    int n;
    string s = "";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 1 || i % 4 == 2) // 1 2
            s += 'a';
        else if (i % 4 == 0 || i % 4 == 3) // 0 3
            s += 'b';
    }
    cout << s;
    return 0;
}


