#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	stack<char> s;
	char ipt = ' ';
	int tag = 0;
	while (ipt != '\n') {
		ipt = cin.get();
		if (tag == 0) {
			if (ipt == '<') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << "<";
				tag = 1;
			}
			else if (ipt == ' ') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << " ";
			}
			else if (ipt == '\n') {
				break;
			}
			else {
				s.push(ipt);
			}		
		}
		else if (tag == 1) {
			if (ipt == '>') {
				cout << ">";
				tag = 0;
			}
			else {
				cout << ipt;
			}
		}		
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}