#include <iostream>
using namespace std;

int m[1000001][2];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		m[i][0] = 999999999;
		m[i][1] = 999999999;
	}
	m[a][0] = 0;
	for (int i = a; i < b; i++) {
		if (m[i][0] < 1000001) {
			m[i + 1][0] = min(m[i + 1][0], m[i][0] + 1);
			if (i * 2 <= b)
				m[i * 2][0] = min(m[i * 2][0], m[i][0] + 1);
			if (i * 10 <= b)
				m[i * 10][1] = min(m[i * 10][1], m[i][0] + 1);
		}
		if (m[i][1] < 1000001) {
			m[i + 1][1] = min(m[i + 1][1], m[i][1] + 1);
			if (i * 2 <= b)
				m[i * 2][1] = min(m[i * 2][1], m[i][1] + 1);
		}
	}
	cout << min(m[b][0], m[b][1]);
}