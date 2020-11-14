#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	string str;
	cin >> str;
	bool flag = 0;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C')
			flag = 1;
		else if (str[i] == 'B' && str[i + 1] == 'C' && str[i + 2] == 'A')
			flag = 1;
		else if (str[i] == 'C' && str[i + 1] == 'A' && str[i + 2] == 'B')
			flag = 1;
		else if (str[i] == 'C' && str[i + 1] == 'B' && str[i + 2] == 'A')
			flag = 1;
		else if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'C')
			flag = 1;
		else if (str[i] == 'A' && str[i + 1] == 'C' && str[i + 2] == 'B')
			flag = 1;
	}

	if (flag)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
