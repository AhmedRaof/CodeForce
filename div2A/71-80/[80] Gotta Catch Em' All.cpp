#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // the word is "Bulbasaur"
    int counter;
    int B = 0, u2 = 0, l = 0, b = 0, a2 = 0, s = 0, r = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'B')
            B++;
        else if (str[i] == 'u')
            u2++;
        else if (str[i] == 'l')
            l++;
        else if (str[i] == 'b')
            b++;
        else if (str[i] == 'a')
            a2++;
        else if (str[i] == 's')
            s++;
        else if (str[i] == 'r')
            r++;
        else
            continue;
    }
    // because this character repeated twice
    a2 /= 2, u2 /= 2;

    int arr[] = { B, u2, l, b, a2, s, r };
    counter = B;
    for (int i = 0; i < 7; i++) {
        if (counter >= arr[i]) {
            counter = arr[i];
        }
    }
    cout << counter;
    return 0;
}
