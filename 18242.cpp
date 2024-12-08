#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, f_u, f_v, e_u, e_v; // first_{ u , v } // end_{ u, v }
	char map[100][100];
	char c;
	bool app = false;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		c = cin.get();
		for (int j = 0; j < m; j++) {
			map[i][j] = cin.get();
			if (map[i][j] == '#') {
				if (!app) {
					app = true;
					f_u = i;
					f_v = j;
				}
				e_u = i;
				e_v = j;
			}
		}
	}
	int u = 0;
	int v = 0;
	for (int i = f_u; i < n; i++) {
		if (map[i][f_v] == '#')
			u++;
		else
			break;
	}
	for (int j = f_v; j < m; j++) {
		if (map[f_u][j] == '#')
			v++;
		else
			break;
	}
	if (u != e_u - f_u + 1)
		cout << "LEFT";
	else if (v != e_v - f_v + 1)
		cout << "UP";
	else {
		for (int i = 0; i < u; i++) {
			if (map[f_u + i][f_v + v - 1] == '.') {
				cout << "RIGHT";
				return 0;
			}
		}
		cout << "DOWN";
	}
}