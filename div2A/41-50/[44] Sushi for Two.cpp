#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class stack {
	struct node {
		int item;
		node* next;
	};
	node* top;

public:

	stack() { top = NULL; }

	void push(int element) {
		node* newItem = new node;
		newItem->item = element;
		newItem->next = top;
		top = newItem;
	}

	bool isEmpty () {
		return top == NULL;
	}

	void pop() {
		node* temp = top;
		top = top->next;
		temp = temp->next = NULL;
		delete temp;
	}
};

int main() {
	int n, ans = 0, lenTest = 0;
	stack s;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++) {
		s.push(arr[i]);

		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				s.push(arr[j]);
			}
			else {
				s.pop();
				lenTest += 1;
				if (s.isEmpty())
					break;
				if (arr[i] == arr[j + 1])
					break;
			}
		}
		
		if (lenTest > ans)
			ans = lenTest;
		lenTest = 0;
	}

	cout << ans * 2;
	return 0;
}
//////////////////////////////////////////////////////ACCEPTED////////////////////////////////////////////////////////////////////
#include<iostream>
#include<algorithm>
using namespace std;

int a[100003];

int main() {
	int i;
	int n, flag = 0, ans = 0;
	int one = 0, two = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (a[0] == 1) // first determination 
		one++;
	else
		two++;


	for (i = 1; i < n; i++) {
		if (a[i - 1] != a[i])
			flag++;

		if (flag == 2) {
			ans = max(ans, min(one, two));
			if (a[i] == 1)
				one = 0;
			else
				two = 0;
			flag = 1;
		}
		if (a[i] == 1)
			one++;
		else
			two++;
	}
	ans = max(ans, min(one, two));

	cout << ans * 2;

}
