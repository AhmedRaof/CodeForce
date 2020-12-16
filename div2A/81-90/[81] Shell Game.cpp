#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    // x is the Ith the ball found
    int m, x, arr[3] = { 0,1,2 };
    cin >> m >> x;

    // every 6 it return to 0 1 2
    m %= 6;

    // we will go as sequense
    /*
        odd => swap left with middle
        even => swap middle with right
    */
    for (int i = 1; i <= m; i++) {
        if (i % 2 != 0)
            swap(arr[0], arr[1]);
        else
            swap(arr[1], arr[2]);
    }
   
    cout << arr[x];
    return 0;
}


