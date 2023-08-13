#include <iostream>
using namespace std;

unsigned long long int map[1000][1000];
unsigned long long int jh[1000][1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, h;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	cin >> h;
	jh[0][0] = map[0][0];
	for (int j = 1; j < m; j++) {
		jh[0][j] = jh[0][j - 1] + map[0][j];
	}
	for (int i = 1; i < n; i++) {
		jh[i][0] = jh[i - 1][0] + map[i][0];
		for (int j = 1; j < m; j++) {
			jh[i][j] = min(jh[i - 1][j], jh[i][j - 1]) + map[i][j];
		}
	}
	if (jh[n - 1][m - 1] > h) {
		cout << "NO";
	}
	else {
		cout << "YES\n" << jh[n - 1][m - 1];
	}
}