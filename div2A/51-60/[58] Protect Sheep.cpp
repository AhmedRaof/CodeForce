#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	int row, colum;
	bool flag = 1;
	cin >> row >> colum;
	char c[1000][1000];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < colum; j++)
			cin >> c[i][j];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colum; j++) {
			if (c[i][j] == 'W' && c[i][j + 1] == 'S' || c[i][j] == 'S' && c[i][j + 1] == 'W' || c[i+1][j] == 'S' && c[i][j] == 'W' || c[i + 1][j] == 'W' && c[i][j] == 'S') {
				flag = 0;
				break;
			}
			else if(c[i][j] == '.') {
				c[i][j] = 'D';
			}
		}
	}

	if (flag) {
		cout << "Yes\n";
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < colum; j++) {
				cout << c[i][j];
			}
			cout << endl;
		}
	}
	else
		cout << "No\n";
	

	return 0;
}
