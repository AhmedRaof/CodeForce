#include<iostream>
#include<string>
using namespace std;

/*
    if the airport aren't the same so
        he will go through all airport for free until he find the another compay so it will cost "1" the he can travil for free
*/

int main() {
    int n, a, b, ans = 0, ans2 = 0;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    
    // if they are in the same position or "the same company" 
    if (s[a - 1] == s[b - 1]) {
        cout << "0";
        return 0;
    }

    cout << "1";
    return 0;
}
