#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

// what is the mean of << :
// https://stackoverflow.com/questions/10983078/c-what-does-ab-mean

// Returns XOR of x and y
int myXOR(int x, int y)
{
    int res = 0; // Initialize result

    // Assuming 32-bit Integer 
    for (int i = 31; i >= 0; i--)
    {
        // Find current bits in x and y
        bool b1 = x & (1 << i);
        bool b2 = y & (1 << i);

        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);

        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}

int main() {

	int count, a, b, n;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> a >> b >> n;
        if (n % 3 == 1)
            cout << b << endl;
        else if (n % 3 == 2)
            cout << myXOR(a, b) << endl;
        else
            cout << a << endl;
		
	}

	return 0;
}
