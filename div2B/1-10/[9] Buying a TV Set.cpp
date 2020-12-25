#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    a %= b;
    return gcd(b, a);
}

int main() {
    /*
        greatest common divisor (gcd) => is the number which i divide to two number we will get the small number
    */
    long long a, b, x, y, GCD;
    std::cin >> a >> b >> x >> y;

    GCD = gcd(x, y);
    
    x /= GCD;
    y /= GCD;
    
    std::cout << std::min(a / x, b / y);

    return 0;
}
