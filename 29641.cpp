#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	string s;
	cin >> k;
	cin >> s;
	cout << s;
	int nowlen = s.length();
	while (cin >> s) {
		if (s.length() + nowlen < k) {
			cout << ' ' << s;
			nowlen += s.length() + 1;
		}
		else {
			cout << '\n' << s;
			nowlen = s.length();
		}
	}
}