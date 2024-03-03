#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q1, q2;
	string name[500];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> name[i];
	for (int i = 0; i < n; i++) {
		cout << "? " << name[i] << endl;
		cin >> q1;
		cout << "? " << name[i] << endl;
		cin >> q2;
		if (q1 != q2) {
			cout << "! " << name[i] << endl;
			return 0;
		}
	}
}