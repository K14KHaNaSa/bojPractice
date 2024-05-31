#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		(x < 24 && y < 60) ? cout << "Yes " : cout << "No ";
		if (x == 2)
			(x > 0 && x < 13 && y > 0 && y < 30) ? cout << "Yes\n" : cout << "No\n";
		else if (x == 4 || x == 6 || x == 9 || x == 11)
			(x > 0 && x < 13 && y > 0 && y < 31) ? cout << "Yes\n" : cout << "No\n";
		else
			(x > 0 && x < 13 && y > 0 && y < 32) ? cout << "Yes\n" : cout << "No\n";
	}
}