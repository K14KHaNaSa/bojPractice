#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int l = 1;
	int r = n;
	int ans;
	bool findanswer = false;
	while (!findanswer) {
		cout << "? " << (l + r) / 2 << endl;
		cin >> ans;
		if (ans == 0) {
			findanswer = true;
		}
		else if (ans > 0) { // down(1)
			r = (l + r) / 2 - 1;
		}
		else { // up(-1)
			l = (l + r) / 2 + 1;
		}
	}
	cout << "= " << (l + r) / 2 << endl;
}