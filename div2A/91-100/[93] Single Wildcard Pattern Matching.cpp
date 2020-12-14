#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, m, starPos = 0, flag = 1, k = 1;
    string s, t;
    cin >> n >> m;
    cin >> s >> t;

    // string contain only *
    if (s == "*") {
        cout << "Yes";
        return 0;
    }

    if (s == t) {
        cout << "YES";
        return 0;
    }

    // to check if the first string contain * or not (NOTE that s != t)
    int test = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '*')
            test = 1;
    if (test == 0) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i] && s[i] != '*') { // if (t != s) before meet the *
            cout << "NO";
            return 0;
        }
        else if (s[i] == '*') { // if we meet * break and get the position
            starPos = i;
            break;
        }
    }

    // if the number of the element after star in the first string bigger than the element in the second string in the same position on star
    if (n - starPos - 1 > m - starPos) {
        cout << "NO";
        return 0;
    }

    /*
        we get the number of character after * in the first string (if they are 3)
        we compare the last number of character in the second string with the first string
            (get the last 3 string [m - 3] [m - 2] [m - 1])
    */
    for (int i = n - starPos - 1; i > 0; i--) {
        if (s[starPos + k] != t[m - i]) {
            flag = 0;
            break;
        }
        k++;
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
