#include<iostream>
#include<string>
using namespace std;

int main() {
    string ss;
    cin >> ss;
    int flag = 1;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < ss.size(); i++) {
            if (ss[i] == 'a') {
                if (b || c) {
                    flag = 0;
                    break;
                }
                a++;
            }
        if (ss[i] == 'b') {
            if (!a || c) {
                flag = 0;
                break;
            }
            b++;
        }
        if (ss[i] == 'c') { 
            if (!a || !b) { 
                flag = 0;
                break;
            }
            c++;
        }
    }
    if (a == 0 || b == 0)
        flag = 0;
    if ((c == a || c == b) && flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
