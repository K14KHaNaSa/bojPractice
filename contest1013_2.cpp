#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	char alp; // a = 97  / z = 122
	cin >> tc;
	alp = cin.get();
	while (tc--) {
		queue<char> ln;
		int errorchar = 0;
		int okchar = 0;
		while (alp == '\n') {
			alp = cin.get();
		}
		bool s = false; // slash for 'v'
		bool ss = false; // slash for 'w'
		while (alp != '\n') {
			if (int(alp) > 96 && int(alp) < 123) {
				ln.push(alp);
				okchar++;
			}
			else if (alp == '@') {
				ln.push('a');
				errorchar++;
			}
			else if (alp == '[') {
				ln.push('c');
				errorchar++;
			}
			else if (alp == '!') {
				ln.push('i');
				errorchar++;
			}
			else if (alp == ';') {
				ln.push('j');
				errorchar++;
			}
			else if (alp == '^') {
				ln.push('n');
				errorchar++;
			}
			else if (alp == '0') {
				ln.push('o');
				errorchar++;
			}
			else if (alp == '7') {
				ln.push('t');
				errorchar++;
			}
			else if (alp == '\\') {
				if (s) {
					s = false;
					ss = true;
				}
				else {
					s = true;
				}
			}
			else if (alp == '\'') {
				errorchar++;
				if (s) {
					s = false;
					ln.push('v');
				}
				else if (ss) {
					ss = false;
					ln.push('w');
				}
			}
			alp = cin.get();
		}
		if (errorchar < okchar) {
			while (!ln.empty()) {
				cout << ln.front();
				ln.pop();
			}
			cout << "\n";
		}
		else {
			cout << "I don't understand\n";
		}
	}
}