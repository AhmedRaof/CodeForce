#include<iostream>
#include<string>
using namespace std;

int main() {
   
    int b, g, n, num = 0;
    cin >> b >> g >> n;
    int* boy = new int[b + 1], * girl = new int[g + 1];
    for (int i = 0; i <= b; i++)
        boy[i] = i;
    for (int i = 0; i <= g; i++)
        girl[i] = i;

    for(int i = 0; i <= b; i++)
        for (int j = 0; j <= g; j++) {
            if (boy[i] + girl[j] == n)
                num++;
        }

    cout << num;
    return 0;
}
