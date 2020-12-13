#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int cp, org, resCp = 0, resOrg = 1; // IMPS already have one orginal toy

int main() {
    
    cin >> cp >> org;

    // there will be no copy ,so you cann't make copy toy
    if (org == 0) {
        cout << "No";
        return 0;
    }
    else if (org == 1 && cp != 0) { // if copy is 0 and orginal is 1 so it is YES
        cout << "No";
        return 0;
    }

    // add orginal toy first
    while (resOrg != org) {
        resCp++; // one copy made
        resOrg++; // one orginal made
    }

    // add copy toy
    while (resCp != cp) {
        if (resCp > cp) {
            break;
        }
        else
            resCp += 2; // there is tow copy toy made
    }
    
    if (resCp == cp && resOrg == org)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
