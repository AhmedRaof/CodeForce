#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    int* school = new int[n], * student = new int[n], Ith;
    for (int i = 0; i < n; i++) {
        cin >> student[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> school[i];
    }
    
    // get the school
    for (int i = 0; i < k; i++) {
        cin >> Ith;
        Ith--; // because the index in the question start from 1 and we start from 0
        for (int j = 0; j < n; j++) {
            if (school[j] == school[Ith] && student[j] > student[Ith]) {
                ans++;
                break;
            }
        }
    }

    cout << ans;
    return 0;
}


