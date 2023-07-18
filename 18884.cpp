#include <iostream>
using namespace std;

string n[20];
string m[20];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int sn, sm, q, y;
	cin >> sn >> sm;
	for (int i = 0; i < sn; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < sm; i++) {
		cin >> m[i];
	}
	cin >> q;
	while (q--) {
		cin >> y;
		y--;
		cout << n[y % sn] << m[y % sm] << "\n";
	}
}