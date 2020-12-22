#include<iostream>
#include<string>
using namespace std;

int main() {
    string S;
    int n, k;
    cin >> n >> k >> S;

    if (k == 0) {
        cout << S;
        return 0;
    }

    if (n == 1) {
        if (S != "0") {
            cout << 0;
            return 0;
        }
        else {
            cout << S;
            return 0;
        }
    }

    for (int i = 0; i < n && k; i++) {
        if (i == 0 && S[i] != '1') {
            S[i] = '1';
            k--;
        }
        else if (S[i] != '0' && i != 0) {
            S[i] = '0';
            k--;
        }

    }

    cout << S;
    return 0;
}
