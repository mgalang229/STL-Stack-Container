#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	stack<int, vector<int> > iStack;
	for (x = 2; x < 8; x += 2) {
		cout << "Pushing " << x << endl;
		iStack.push(x);
	}
	cout << "The size of the stack is " << iStack.size() << endl;
	for (x = 2; x < 8; x += 2) {
		cout << "Popping " << iStack.top() << endl;
		iStack.pop();
	}
	return 0;
}
