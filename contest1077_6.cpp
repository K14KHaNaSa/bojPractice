#include <iostream>
using namespace std;

bool now[7];
bool nxt[7];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, v1, v2;
	char op1, op2;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < 7; i++) {
			now[i] = false;
			nxt[i] = false;
		}
		now[1] = true;
		for (int i = 0; i < n; i++) {
			cin >> op1 >> v1 >> op2 >> v2;
			if (op1 == '+') {
				for (int i = 0; i < 7; i++) {
					if (now[i]) {
						nxt[(i + v1) % 7] = true;
					}
				}
				if (op2 == '+') {
					for (int i = 0; i < 7; i++) {
						if (now[i]) {
							nxt[(i + v2) % 7] = true;
						}
					}
				}
				else if (op2 == '*') {
					for (int i = 0; i < 7; i++) {
						if (now[i]) {
							nxt[(i * v2) % 7] = true;
						}
					}
				}
			}
			else if (op1 == '*') {
				for (int i = 0; i < 7; i++) {
					if (now[i]) {
						nxt[(i * v1) % 7] = true;
					}
				}
				if (op2 == '+') {
					for (int i = 0; i < 7; i++) {
						if (now[i]) {
							nxt[(i + v2) % 7] = true;
						}
					}
				}
				else if (op2 == '*') {
					for (int i = 0; i < 7; i++) {
						if (now[i]) {
							nxt[(i * v2) % 7] = true;
						}
					}
				}
			}
			for (int i = 0; i < 7; i++) {
				if (nxt[i]) {
					now[i] = true;
				}
				else {
					now[i] = false;
				}
				nxt[i] = false;
			}
		}
		if (now[0]) {
			cout << "LUCKY\n";
		}
		else {
			cout << "UNLUCKY\n";
		}
	}
}