#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	char c;
	c = cin.get();
	if (int(c) < 73) {
		cout << 157 - (int(c));
	}
	else if (int(c) >= 73) {
		cout << (int(c)) + 11;
	}
}