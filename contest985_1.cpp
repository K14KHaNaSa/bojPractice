#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, lv;
	cin >> n;
	while (n--) {
		cin >> lv;
		if (lv == 300) {
			cout << "1 ";
		}
		else if (lv >= 275) {
			cout << "2 ";
		}
		else if (lv >= 250) {
			cout << "3 ";
		}
		else {
			cout << "4 ";
		}
	}
}