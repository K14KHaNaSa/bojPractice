#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char pre = '.';
	char c;
	cin >> n;
	c = cin.get();
	while (n--) {
		c = cin.get();
		while (c != '\n') {
			if (c != pre) {
				cout << c;
				pre = c;
			}
			c = cin.get();
			if (c == EOF)
				return 0;
		}
		cout << '\n';
		pre = '.';
	}
}