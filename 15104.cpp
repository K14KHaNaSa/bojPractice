#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	int length = s.length();
	for (int i = 0; i < length - 1; i++) {
		if (s.substr(i, 1) == s.substr(i + 1, 1)) {
			cout << "Or not.";
			return 0;
		}
	}
	cout << "Odd.";
}