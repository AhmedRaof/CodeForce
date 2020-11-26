#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int n, m;
    scanf_s("%d:%d", &n, &m); // n is the number of HOUR and m is the number of MINUTE
    int i; // i is the number of minute she will sleep

    // test if the two number are palindrome or not
    /*
        1.
            test the last element of hour with the first element of minute
        2.
            test the first element of hour with the last element of minute
    */
    if (n % 10 == m / 10 && n / 10 == m % 10)
        printf("0\n");
    else
    {
        for (i = 1; i <= 3600; i++)
        {
            m++; // plus the number of minute by one
            int t = m / 60; // it will get zero for all value of m except "m = 60" => it will get 1
            m %= 60; // make m = 0 when it became 60
            n += t; // it will no add value to hour except the minute became 60
            n %= 24; // make n = 0 when it became 24
            if (n % 10 == m / 10 && n / 10 == m % 10) // if reverse are equle break
                break;
        }
        printf("%d\n", i); // print the number of minute
    }
    return 0;
}

