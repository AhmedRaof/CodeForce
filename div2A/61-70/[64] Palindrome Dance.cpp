#include <iostream>
#include<string>
using namespace std;

int main() {
    int n, whitePrice, blackPrice, cost = 0;
    cin >> n >> whitePrice >> blackPrice;

    bool whiteBig = true, odd = true;
    if (whitePrice < blackPrice)
        whiteBig = false;
    if (n % 2 == 0)
        odd = false;
    
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0, j = n - 1; i < n && j > 0; j--, i++) {
        if (odd && i == n / 2)
            break;
        else if(i > (n / 2) - 1)
            break;
        else {
            if (arr[i] == 0 && arr[j] == 2)
                cost += whitePrice;
            else if (arr[i] == 2 && arr[j] == 0)
                cost += whitePrice;
            else if (arr[i] == 1 && arr[j] == 2)
                cost += blackPrice;
            else if (arr[i] == 2 && arr[j] == 1)
                cost += blackPrice;
            else if (arr[i] == 2 && arr[j] == 2) {
                if (whiteBig)
                    cost += blackPrice + blackPrice;
                else
                    cost += whitePrice + whitePrice;
            }
            else if (arr[i] == 0 && arr[j] == 1) {
                cout << "-1";
                return 0;
            }
            else if (arr[i] == 1 && arr[j] == 0) {
                cout << "-1";
                return 0;
            }
        }
    }
    
    // to calculate the number in the center
    if (odd) {
        if (arr[n / 2] == 2) {
            if (whiteBig)
                cost += blackPrice;
            else
                cost += whitePrice;
        }
    }
    cout << cost;
    return 0;
}
