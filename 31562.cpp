#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, t;
	string songname[1000];
	char b[1000][3];
	char a, b1, b2, b3; // a = dummy input
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t >> songname[i];
		for (int j = 0; j < 3; j++)
			cin >> b[i][j];
		for (int j = 0; j < 4; j++)
			cin >> a;
	}
	while (m--) {
		string ans = "";
		int cor = 0;
		cin >> b1 >> b2 >> b3;
		for (int i = 0; i < n; i++) {
			if (b1 == b[i][0] && b2 == b[i][1] && b3 == b[i][2]) {
				cor++;
				ans = songname[i];
			}
		}
		if (cor == 0)
			cout << "!\n";
		else if (cor > 1)
			cout << "?\n";
		else
			cout << ans << "\n";
	}
}