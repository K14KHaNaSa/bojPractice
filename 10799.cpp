#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int stick, memory;
	stack<char> stk;
	stack<char> fullinput;
	char gwal=' ';
	stick = 0;
	memory = 0;
	while (gwal != '\n') {
		gwal = cin.get();
		if (gwal == '(') {
			stk.push('(');
			memory++;
			fullinput.push('(');
		}
		else if (gwal == ')') {
			if (fullinput.top() == '(') {
				memory--;
				stick += memory;
			}
			else if (fullinput.top() == ')') {
				memory--;
				stick++;
			}
			fullinput.push(')');
		}
	}
	cout << stick;
}