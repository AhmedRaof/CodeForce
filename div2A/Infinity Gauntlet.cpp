#include<iostream>
#include<string>
using namespace std;
int main() {
	
	int n; // the number of color that will entered
	cin >> n;

	// we enter it in the same order to have the same index
	string color[6] = { "purple", "green", "blue", "orange", "red", "yellow" },
		power[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};

	string* col = new string[n]; // the color that user will enter
	string* notTarget = new string[n]; // the power of color that entered

	// this loop to enter color and save the power of these color
	for (int i = 0; i < n; i++) {
		cin >> col[i]; // user enter color
		
		// this loop to save the power of these color
		for (int j = 0; j < 6; j++) {
			if (color[j] == col[i]) {  // these if condition to get the power by index (because they are in order)
				
				notTarget[i] = power[j]; // it will save the power of color entered in notTarget
			}
		}
	}

	// this loop to compare between the power and if they are the same it will deleted
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			if (notTarget[i] == power[j]) {
				for (int z = j; z < 5; ++z) { // note that we say 5 not 6
					power[z] = power[z + 1];
				}
			}
		}
	}
	
	cout << 6 - n << endl; // it will print the remain power

	for (int i = 0; i < 6 - n; i++) {
		cout << power[i] << endl;
	}
}
