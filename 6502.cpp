#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double r, w, l;
	cin >> r;
	int pizzanum = 1;
	while (r != 0) {
		cin >> w >> l;
		cout << "Pizza " << pizzanum;
		if ((w / 2) * (w / 2) + (l / 2) * (l / 2) <= r * r) {
			cout << " fits on the table.\n";
		}
		else {
			cout << " does not fit on the table.\n";
		}
		pizzanum++;
		cin >> r;
	}
}