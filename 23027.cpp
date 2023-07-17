#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char l;
	queue<char> letter;
	l = cin.get();
	bool a = false;
	bool b = false;
	bool c = false;
	while (l != '\n') {
		letter.push(l);
		if (l == 'A') {
			a = true;
		}
		if (l == 'B') {
			b = true;
		}
		if (l == 'C') {
			c = true;
		}
		l = cin.get();
	}
	char f;
	if (a) {
		while (!letter.empty()) {
			f = letter.front();
			if (f == 'B' || f == 'C' || f == 'D' || f == 'F') {
				cout << "A";
			}
			else {
				cout << letter.front();
			}
			letter.pop();
		}
	}
	else if (b) {
		while (!letter.empty()) {
			f = letter.front();
			if (f == 'C' || f == 'D' || f == 'F') {
				cout << "B";
			}
			else {
				cout << letter.front();
			}
			letter.pop();
		}
	}
	else if (c) {
		while (!letter.empty()) {
			f = letter.front();
			if (f == 'D' || f == 'F') {
				cout << "C";
			}
			else {
				cout << letter.front();
			}
			letter.pop();
		}
	}
	else {
		while (!letter.empty()) {
			cout << "A";
			letter.pop();
		}
	}
}