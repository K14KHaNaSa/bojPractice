#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	bool rs[201];
	int r[200];
	char s;
	string name[200];
	for (int i = 0; i <= 200; i++)
		rs[i] = false;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int combo = 0;
		r[i] = 0;
		for (int j = 0; j < m; j++) {
			cin >> s;
			if (s == '*')
				combo = 0;
			if (s == '.') {
				combo++;
				r[i] = max(r[i], combo);
			}
		}
		cin >> name[i];
		rs[r[i]] = true;
	}
	int dif = 0;
	for (int i = 0; i <= 200; i++) {
		if (rs[i])
			dif++;
	}
	cout << dif << "\n";
	for (int i = 0; i < n; i++) {
		cout << r[i] << " " << name[i] << "\n";
	}
}