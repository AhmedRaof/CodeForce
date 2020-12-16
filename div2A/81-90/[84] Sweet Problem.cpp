#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int num, arr[3];
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);

        if (arr[2] <= arr[1] + arr[0])
            cout << (arr[0] + arr[1] + arr[2]) / 2 << endl;
        else
            cout << arr[0] + arr[1] << endl;
    }
    return 0;
}


