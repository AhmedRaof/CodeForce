#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

const int N = 1000001;
int a[N] = { 0 };

int main() {
    int n;
    cin >> n;
    int m = n;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        a[p] = 1;

        while (a[m] == 1) {
            cout << m << " ";
            m--;
        }
        cout << endl;
    }
    return 0;
}
