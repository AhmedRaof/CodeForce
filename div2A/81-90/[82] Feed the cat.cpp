#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    int hh, mm;
    double h, d, c, n, costNoDiscount = 0, costWithDiscount = 0, minute = 0;
    cin >> hh >> mm >> h >> d >> c >> n;

    costNoDiscount = ceil((h / n)) * c;
    
    while (true) {
        if(hh == 24 && mm == 59) {
            hh = 0;
        }
        if (hh >= 20) {
            break;
        }
        mm++;
        hh += mm / 60;
        mm %= 60;
        minute++;
    }

    h = h + (d * minute);
    costWithDiscount = ceil((h / n)) * c - ceil((h / n)) * c * 0.2;

    if (costNoDiscount >= costWithDiscount) {
        cout << fixed << setprecision(4) << costWithDiscount << endl;
        return 0;
    }
    else {
        cout << fixed << setprecision(4) << costNoDiscount << endl;
        return 0;
    }
    
    
    return 0;
}


