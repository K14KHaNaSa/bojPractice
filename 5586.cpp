#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s, ss;
	cin >> s;
	int j = 0;
	int i = 0;
	for (int l = 0; l < s.length() - 2; l++) {
		ss = s.substr(l, 3);
		if (ss == "JOI")
			j++;
		if (ss == "IOI")
			i++;
	}
	cout << j << '\n' << i;
}