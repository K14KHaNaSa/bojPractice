#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, asseyrange;
	cin >> n;
	vector<int> assey(n);
	vector<bool> able(n);
	able[0] = true;
	bool yaas = false;
	if (n == 1) {
		cin >> assey[0];
	}
	else {
		for (int i = 0; i < n; i++) {
			cin >> assey[i];
		}
		for (int i = 0; i < n - 1; i++) {
			cin >> asseyrange;
			if (!yaas) {
				int able_to_catch = assey[i] + asseyrange;
				bool timetocatch = true;
				int nextassey = i + 1;
				while (timetocatch && nextassey < n) {
					if (assey[nextassey] <= able_to_catch && able[i] == true) {
						able[nextassey] = true;
						if (able[n - 1]) {
							yaas = true;
							break;
						}
						nextassey++;
					}
					else {
						timetocatch = false;
					}
				}
			}
		}
	}
	if (able[n - 1]) {
		cout << "권병장님, 중대장님이 찾으십니다";
	}
	else {
		cout << "엄마 나 전역 늦어질 것 같아";
	}
}