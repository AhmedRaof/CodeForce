#include<iostream>
#include<string>
using namespace std;

int main() {
    int ans = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'D' && s[i+1] == 'a' && s[i+2] == 'n' && s[i+3] == 'i' && s[i+4] == 'l' )
            ans++;
        else if (s[i] == 'O' && s[i+1] == 'l' && s[i+2] == 'y' && s[i+3] == 'a')
            ans++;
        else if (s[i] == 'S' && s[i+1] == 'l' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'a')
            ans++;
        else if (s[i] == 'A' && s[i + 1] == 'n' && s[i+2] == 'n')
            ans++;
        else if (s[i] == 'N' && s[i + 1] == 'i' && s[i + 2] == 'k' && s[i + 3] == 'i' && s[i+4] == 't' && s[i + 5] == 'a')
            ans++;
        
    }
    if (ans == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
