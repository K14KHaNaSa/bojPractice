#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char a;
	char line[100];
	int chars = 0;
	int alp = 0;
	a = cin.get();
	while (a != '\n') {
		line[chars] = a;
		chars++;
		a = cin.get();
	}
	for (int i = 0; i < chars; i++) {
		if (line[i] == 'c') {
			if (i + 1 < chars) {
				if (line[i + 1] == '=' || line[i + 1] == '-') {
					i++;
				}
			}
		}
		else if (line[i] == 'd') {
			if (i + 2 < chars) {
				if (line[i + 1] == 'z' && line[i + 2] == '=') {
					i += 2;
				}
			}
			if (i + 1 < chars) {
				if (line[i + 1] == '-') {
					i++;
				}
			}
		}
		else if (line[i] == 'l') {
			if (i + 1 < chars) {
				if (line[i + 1] == 'j') {
					i++;
				}
			}
		}
		else if (line[i] == 'n') {
			if (i + 1 < chars) {
				if (line[i + 1] == 'j') {
					i++;
				}
			}
		}
		else if (line[i] == 's') {
			if (i + 1 < chars) {
				if (line[i + 1] == '=') {
					i++;
				}
			}
		}
		else if (line[i] == 'z') {
			if (i + 1 < chars) {
				if (line[i + 1] == '=') {
					i++;
				}
			}
		}
		alp++;
	}
	cout << alp;
}