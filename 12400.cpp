#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	char ch;
	cin >> t;
	ch = cin.get();
	for (int i = 0; i < t; i++) {
		queue<char> line;
		ch = cin.get();
		while (ch != '\n') {
			if (ch == ' ') {
				line.push(' ');
			}
			else if (ch == 'a') {
				line.push('y');
			}
			else if (ch == 'b') {
				line.push('h');
			}
			else if (ch == 'c') {
				line.push('e');
			}
			else if (ch == 'd') {
				line.push('s');
			}
			else if (ch == 'e') {
				line.push('o');
			}
			else if (ch == 'f') {
				line.push('c');
			}
			else if (ch == 'g') {
				line.push('v');
			}
			else if (ch == 'h') {
				line.push('x');
			}
			else if (ch == 'i') {
				line.push('d');
			}
			else if (ch == 'j') {
				line.push('u');
			}
			else if (ch == 'k') {
				line.push('i');
			}
			else if (ch == 'l') {
				line.push('g');
			}
			else if (ch == 'm') {
				line.push('l');
			}
			else if (ch == 'n') {
				line.push('b');
			}
			else if (ch == 'o') {
				line.push('k');//e?k?
			}
			else if (ch == 'p') {
				line.push('r');
			}
			else if (ch == 'q') {
				line.push('z');
			}
			else if (ch == 'r') {
				line.push('t');
			}
			else if (ch == 's') {
				line.push('n');
			}
			else if (ch == 't') {
				line.push('w');
			}
			else if (ch == 'u') {
				line.push('j');
			}
			else if (ch == 'v') {
				line.push('p');
			}
			else if (ch == 'w') {
				line.push('f');
			}
			else if (ch == 'x') {
				line.push('m');
			}
			else if (ch == 'y') {
				line.push('a');
			}
			else if (ch == 'z') {
				line.push('q');
			}
			ch = cin.get();
		}
		cout << "Case #" << i + 1 << ": ";
		while (!line.empty()) {
			cout << line.front();
			line.pop();
		}
		cout << "\n";
	}
}