#include <iostream>
#include<string>
#include<set>
using namespace std;

/*
    set => is a library in c++
            The Idea Of Set
    it didn't insert an repeated element
*/

int main(void)
{
    /*
                        TRACING PROGRAMM
        5
        a aa aaa ab abb
        => it will add [a] to S
           then it will add it to mySet
        => it will add the first [a] then the second [a] already added so it will no more add [a]
           it will find that [a] is already exist so it will not add
        => it will add the first [a] in S then the second and third [a] will no added in S
           it will not added to mySet because it already exist
        => it will add [a] and [b] in S
           then it will find that [a] is exist so it will not added it and [b] will add it
        => it will add [a] and [b] but not add the second [b]
           it will not add anything because it already exist
    */

    int n;
    string str;
    cin >> n;
    
    set <set <char>> mySet; // define 2 dimension array of char

    while (n--)
    {
        cin >> str;
        set <char> S; // define array of char

        for (char x : str) // this loop will go through all character in string and insert it in S
            S.insert(x);

        mySet.insert(S); // it will add the all char of S convert it to one string  
    }

    cout << mySet.size() << endl;

    mySet.clear();
    

    return 0;
}
