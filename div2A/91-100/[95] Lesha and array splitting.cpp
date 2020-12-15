#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int* arr = new int[n];
     
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum != 0) {
        cout << "YES\n";
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return 0;
    }
    
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum != 0) {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << 1 << " " << i + 1 << endl;
            cout << i + 2 << " " << n << endl;
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}
