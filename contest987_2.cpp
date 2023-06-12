#include <iostream>
using namespace std;

int n, m, answer;
int spy[6];

void bt(int day, int ovalue, int preact) {
	if (day == n) {
		if (ovalue >= m) {
			answer++;
		}
	}
	else {
		int pre = preact % 3;
		for (int i = 0; i < 6; i++) {
			if (i % 3 == pre) {
				bt(day + 1, ovalue + (spy[i] / 2), i);
			}
			else {
				bt(day + 1, ovalue + spy[i], i);
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < 6; i++) {
		cin >> spy[i]; // same area = indexno % 3
	}
	answer = 0;
	for (int i = 0; i < 6; i++) {
		bt(1, spy[i], i);
	}
	cout << answer;
}