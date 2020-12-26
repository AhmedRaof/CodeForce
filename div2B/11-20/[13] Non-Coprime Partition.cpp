#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n <= 2) {
        cout << "No";
        return 0;
    }
    else {
        cout << "Yes" << endl;
        int k = 0;
        k = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
        cout << "1 " << k << endl;
        cout << n - 1 << " ";
        for (int i = 1; i <= n; i++)
            if (i != k)
                cout << i << " ";
    }
    
    return 0;
}
