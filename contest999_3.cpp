#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<long long int> a(n);
	if (n == 1) {
		cin >> a[0];
		cout << "YES\n" << a[0] << "\n" << 0;
	}
	else if (n == 2) {
		cin >> a[0] >> a[1];
		cout << "YES\n" << a[0] << " " << a[0] << "\n0 " << a[1] - a[0];
	}
	else {
		bool yesno = true;
		cin >> a[0] >> a[1];
		long long int stdrd = a[1] - a[0];
		for (int i = 2; i < n; i++) {
			cin >> a[i];
			if (a[i] - a[i - 1] != stdrd) {
				yesno = false;
			}
		}
		if (yesno) {
			cout << "YES\n";
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << "\n";
			for (int i = 0; i < n; i++) {
				cout << "0 ";
			}
		}
		else {
			cout << "NO";
		}
	}
}