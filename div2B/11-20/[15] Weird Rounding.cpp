#include <iostream>
#include<vector>
#include <string>
#include<sstream>
using namespace std;

int countDigitsToBeRemoved(int N, int K)
{
    // Converting the given number 
    // into string 
    string s = to_string(N);

    // variable to store number of 
    // digits to be removed 
    int res = 0;

    // variable to denote if atleast 
    // one zero has been found 
    int f_zero = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (K == 0)
            return res;
        if (s[i] == '0') {

            // zero found 
            f_zero = 1;
            K--;
        }
        else
            res++;
    }

    // return size - 1 if K is not zero and 
    // atleast one zero is present, otherwise 
    // result 
    if (!K)
        return res;
    else if (f_zero)
        return s.size() - 1;
    return -1;
}

int main() {
    int N, k;
    cin >> N >> k;
    cout << countDigitsToBeRemoved(N, k);
	return 0;
}
