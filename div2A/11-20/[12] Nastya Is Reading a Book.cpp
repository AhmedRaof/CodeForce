#include<iostream>
#include<string>
using namespace std;
int main() {
	
	/*
		n => the number of chapters in book
		k => the first page which was not read
		.. she read all pages from the 1-st to the (k-1)-th
		li, ri => (l1 = 1, li <= ri)
		[ numbers of the first and the last pages of the i-th chapter. 
		   It's guaranteed that li+1=ri+1 for all 1≤i≤n−1, and also that every chapter contains at most 100 pages. ]
	*/

	int n, k, l, r;
	cin >> n;
	int remainChapter = n;
	int* start = new int[n], * end = new int[n];
	for (int i = 1; i <= n; i++) { 	// this loop to enter data
		cin >> l >> r;
		start[i-1] = l; // page start of the chapter
		end[i-1] = r; // page end of the chapter
	}

	cin >> k;
	
	for (int i = 0; i < n; i++) {
		// if k is bigger than last page in chapter ,so chapter readed and remove it
		if (k > end[i]) {
			remainChapter--;
		}
	}
	
	cout<<remainChapter;

}
