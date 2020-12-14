#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    
    // if there is MM in string
    for(int i=0;i<n-1;i++)
        if (s[i] == s[i + 1] && s[i] != '?') {
            cout << "No";
            return 0;
        }
    
    for(int i=0;i<n;i++)
        if (s[i] == '?') {
            if (i == 0 || i == n - 1) { // the '?' in the first or in the last
                cout << "Yes";
                return 0;
            }
            else if (s[i + 1] == '?') { // if there is two ??
                cout << "Yes";
                return 0;
            }
            else if (s[i - 1] == s[i + 1]) { // if Y?Y OR M?M OR C?C
                cout << "Yes";
                return 0;
            }
        }

    cout << "No";
    return 0;
}
