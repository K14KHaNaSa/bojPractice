#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char emoji;
	for (int i = 0; i < 6; i++) {
		emoji = cin.get();
	}
	int emojilength = 6;
	int ubar = 0;
	while (emoji != ':') {
		emoji = cin.get();
		if (emoji == '_') {
			ubar++;
		}
		emojilength++;
	}
	cout << emojilength + 2 + ubar * 5;
}