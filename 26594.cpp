#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n = 1;
	char firstchar;
	char inputchar;
	bool readn = true;
	firstchar = cin.get();
	inputchar = cin.get();
	while (inputchar != '\n') {
		if (inputchar == firstchar && readn) {
			n++;
		}
		inputchar = cin.get();
	}
	cout << n;
}