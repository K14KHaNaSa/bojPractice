#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	char n = ' ';
	int space = 0;
	int chars = 0;
	int charcount = 0;
	while (n != '\n' || cin.eof()) {
		cin.get(n);
		if (n == ' ' || n == '\n') {
			if (chars != 0) {
				charcount++;
			}
			chars = 0;
		}
		else {
			chars++;
		}
	}
	cout << charcount;
}