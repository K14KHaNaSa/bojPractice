#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k, bookno, under;
	bool yesno = true;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> k >> under;
		for (int j = 1; j < k; j++) {
			cin >> bookno;
			if (under < bookno && yesno) {
				yesno = false;
			}
			else if (yesno) {
				under = bookno;
			}
		}
	}
	if (yesno) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}