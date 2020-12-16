#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = '0' + s + '0';

    if (s.find("000") == -1 && s.find("11") == -1)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}
