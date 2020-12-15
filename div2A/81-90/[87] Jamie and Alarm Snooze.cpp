#include<iostream>
#include<string>
using namespace std;

int main() {
    int snooze, hh, mm, ans = 0;
    cin >> snooze >> hh >> mm;

    // if the clock contains '7'
    if (mm % 10 == 7 || mm / 10 == 7 || hh % 10 == 7 || hh / 10 == 7) {
        cout << ans;
        return 0;
    }

    while (mm % 10 != 7 && mm / 10 != 7 && hh % 10 != 7 && hh / 10 != 7) {
        mm-=snooze;
        if (mm < 0) {
            mm = 60 + mm;
            hh--;
            if(hh < 0) {
                hh = 24 + hh;
            }
        }
        ans++;
    }

    cout << ans;
    return 0;
}
