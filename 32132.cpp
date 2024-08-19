#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char c;
	c = cin.get(); // \n
	int ps = 0; // 0 = none / 1 = "P"s / 2 = "PS"
	while (n--) {
		c = cin.get();
		if (ps == 2 && (c == '4' || c == '5')) continue;
		if (c == 'P')
			ps = 1;
		else if (c == 'S' && ps == 1)
			ps = 2;
		else
			ps = 0;
		cout << c;
	}
}