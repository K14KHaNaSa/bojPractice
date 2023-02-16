#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, pg;
	cin >> n >> m;
	vector<bool> paper(n + 1);
	for (int i = 0; i < m; i++) {
		cin >> pg;
		paper[pg] = true;
	}
	// 가운데 1~2페이지까지는 비워버려도 됨
	for (int i = 1; i <= n; i++) {
		if (paper[i] == false) {
			if (i + 3 <= n) {
				if (paper[i + 1] == true && paper[i + 2] == true && paper[i + 3] == false) {
					paper[i + 1] = false;
					paper[i + 2] = false;
				}
			}
			if (i + 2 <= n) {
				if (paper[i + 1] == true && paper[i + 2] == false) {
					paper[i + 1] = false;
				}
			}
		}
	}
	int combo = 0;
	int ink = 0;
	for (int i = 1; i <= n; i++) {
		if (paper[i] == false) {
			combo++;
		}
		else if (combo > 0) {
			ink += 5 + 2 * combo;
			combo = 0;
		}
	}
	if (combo != 0) {
		ink += 5 + 2 * combo;
	}
	cout << ink;
}