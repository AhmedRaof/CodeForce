#include<iostream>
#include<string>
using namespace std;
/*
        even => (n / 2) - 1
        odd => n / 2;
*/

class linkedList {
	struct node {
		char item;
		node* next;
	};
	node* first, * last;
	int len;
public:
	string s;
	linkedList() {
		first = last = NULL;
		len = 0;
		s = "";
	}
	void insertFirst(char element) {
		node* newNode = new node;
		newNode->item = element;
		if (len == 0) {
			first = last = newNode;
			newNode->next = NULL;
		}
		else {
			newNode->next = first;
			first = newNode;
		}
		len++;
	}
	void insertLast(char element) {
		node* newNode = new node;
		newNode->item = element;
		if (len == 0) {
			first = last = NULL;
			newNode->next = NULL;
		}
		else {
			last->next = newNode;
			newNode->next = NULL;
			last = newNode;
		}
		len++;
	}
	string print() {

		node* pr = first;
		for (int i = 0; i < len; i++) {
			s += pr->item;
			pr = pr->next;
		}
		return s;
	}
};

string rev(string str) {
	string res;
	for (int i = str.length() - 1; i >= 0; i--) {
		res += str[i];
	}
	return res;
}

int main() {
    int n, i = 0, j = 0, k = 0, len, y = 0;
	linkedList res;
    cin >> n;
    len = n;
    string s;
    cin >> s;

    if (n % 2 == 0) {
		for (int i = 0; i < n; i++) {
			if (i % 2 != 0)
				res.insertLast(s[i]);
			else
				res.insertFirst(s[i]);
		}
		cout << res.print();
    }
    else {
        for (int i = 0; i < n; i++) {
			if (i % 2 == 0)
				res.insertFirst(s[i]);
			else
				res.insertLast(s[i]);
        }
		cout << rev(res.print());
    }
     
	

    return 0;
}


