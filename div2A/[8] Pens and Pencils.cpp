#include<iostream>
#include<string>
using namespace std;
int main() {
	/*
		a => the number of lecture
		b => the number of parctical classes
		c => the number of lecture you can write using one pen
		d => the number of practical classes can write using one pencil
		k => pencilcase volume
	*/
	//  (their total number must not exceed k) => x+y≤k
	/* OUTPUT : x y 
		x => the number of pens
		y => the number of pencil
	*/
	/*
		1) compare the number of lecture with pens and section with pencil
		2) see if they are equal or bigger of smaller
		=> 7 5 4 5 8
			   2.1) lecture is bigger than pens ------- section are equal
			1) 7 - 4 = 3 number of lecture, add one pens x=1
			2) 3-4 <=0 number of lecture is now smaller than 0, add another pen x=2
						---------------------
				3) 5-5 = 0 number of section, add one pencil y=1
			at the end check for pensCase "k" => test x+y <= k => if not add to X
			to make them equal
				so the result is y=1, x=7
		=> 7 5 4 5 2
			   2.2) lecture is bigger than pens ------- section are equal
			1) 7-4 = 3 number of lecture, add one pens x=1
			2) 3-4 <= 0 number of lecture is now smaller than 0, add another pen x=2
						--------------------
			3) 5-5 = 0 number of section add one pencile y=1
			at the end check for pensCase "k" => test x+y > k => so the result will be -1
		=> 20 53 45 26 4
			  2.3) lecture is smaller than pens------------section is bigger than pencils
			1) 20 - 53 >=0 number of lecture, so just add one to pen x=1
						-------------------
			2) 53-26 =  27 number of section, so add one pencil y = 1
			3) 27 - 26 = 1 number of section, so add one pencil y = 2
			4) 1-26 <=0 now number of section is less than zero, so add another y=3
			at the end check for pensCase "k" => test x+y <= k => 1 + 3 so it is true
	*/
	int t, a, b, c, d, k, x = 0, y = 0;
	cin >> t;
	int* arrX = new int[t], *arrY = new int [t], *arrK = new int [t];
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c >> d >> k;
		arrK[i] = k;
		// test number of pens and lecture
		while (a >= 0) {
			if (a - c > 0) {
				x++;
			}
			else if (a - c <= 0) {
				x++;
				break;
			}
			a = a - c;
		}
		// test the number of section and pencil
		while (b >= 0) {
			if (b - d > 0) {
				y++;
			}
			else if (b - d <= 0) {
				y++;
				break;
			}
			b = b - d;
		}
		if (x + y == k) {
			arrX[i] = x, arrY[i] = y;
			x = 0, y = 0;
		}
		else if (x + y > k) {
			arrX[i] = x, arrY[i] = y;
			x = 0, y = 0;
			
		}
		else if (x + y < k) {
			/*
				for example x=2, y=1, k=8
				x+= k-x-y
				2+= 8-2-1 = 3
				so x=7
				so x+y = k <=
			*/
			arrX[i] = x, arrY[i] = y;
			arrX[i] += arrK[i] - arrX[i] - arrY[i];
			x = 0, y = 0;
		}
	}

	for (int i = 0; i < t; i++) {
		if (arrX[i] + arrY[i] > arrK[i]) {
			cout << "-1" << endl;
		}
		else {
			cout << arrX[i] << " " << arrY[i] << endl;
		}
	}
	
}
