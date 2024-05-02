#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int c = 1;
	string m;
	cin >> n;
	while (n--) {
		cin >> m;
		if (m.length() >= c)
			cout << m.substr(c - 1, 1);
		else
			cout << " ";
		c = m.length();
	}
}