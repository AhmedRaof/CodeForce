#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    for (int k = 0; k < n / 2; k++) {
        reverse(arr.begin() + k, arr.end() - k);
        /*for (int i = k, j = n - k - 1; i < j; i++, j--) {
            swap(arr[i], arr[j]);
        }*/
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
/***********************************************************OR****************************************************************************/
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int [n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - i - 1; i++) {
        if (i % 2 == 0)
            swap(arr[i], arr[n - i - 1]);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
