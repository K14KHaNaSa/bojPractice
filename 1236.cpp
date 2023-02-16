#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<bool> ng(n, false);
	vector<bool> mg(m, false);
	char area;
	for (int i = 0; i < n; i++) {
		area = cin.get();
		for (int j = 0; j < m; j++) {
			area = cin.get();
			if (area == 'X') {
				ng[i] = true;
				mg[j] = true;
			}
		}
	}
	int ngf = 0;
	int mgf = 0;
	for (int i = 0; i < n; i++) {
		if (ng[i] == false) {
			ngf++;
		}
	}
	for (int j = 0; j < m; j++) {
		if (mg[j] == false) {
			mgf++;
		}
	}
	cout << max(ngf, mgf);
}