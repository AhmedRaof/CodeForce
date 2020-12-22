#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

int main() {
    double a, b, test = 0, block = 0, S = 0;
    int n, i;
    cin >> n >> a >> b;
    i = n - 1;
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        S += arr[i];
    }
    
    sort(arr + 1, arr + n);
    
    test = (a * arr[0]) / S;

    while (test < b && test != b && i < n) {
        S -= arr[i];
        test = (a * arr[0]) / S;
        i--;
        block++;
    }
    
    cout << block;
    
    return 0;
}
