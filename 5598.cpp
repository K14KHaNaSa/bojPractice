#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	char caesar, origin;
	int ascii;
	cin.get(caesar);
	while (caesar != '\n') {
		int ascii = int(caesar);
		ascii = ascii - 3;
		if (ascii < 65) {
			ascii = ascii + 26;
		}
		char origin = char(ascii);
		cout << origin;
		cin.get(caesar);
	}
}