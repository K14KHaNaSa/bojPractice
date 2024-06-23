#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int j = 0;
	string s;
	while (cin >> s) {
		if (s.size() > 3) {
			for (int i = 0; i < s.size() - 3; i++) {
				if (s.substr(i, 4) == "joke")
					j++;
			}
		}
	}
	cout << j;
}