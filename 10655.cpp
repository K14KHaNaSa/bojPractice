#include <iostream>
#include <cmath>
using namespace std;

int ck[100000][4]; // x, y, (nojump), (jump1)

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	cin >> ck[0][0] >> ck[0][1];
	ck[0][2] = 0;
	ck[0][3] = 0;
	ck[1][3] = 0;
	for (int i = 1; i < n; i++) {
		cin >> ck[i][0] >> ck[i][1];
		ck[i][2] = ck[i - 1][2] + abs(ck[i][0] - ck[i - 1][0]) + abs(ck[i][1] - ck[i - 1][1]);
		if (i == 2) {
			ck[i][3] = abs(ck[0][0] - ck[2][0]) + abs(ck[2][1] - ck[0][1]);
		}
		else if (i > 2) {
			ck[i][3] = min(ck[i - 2][2] + abs(ck[i][0] - ck[i - 2][0]) + abs(ck[i][1] - ck[i - 2][1]),
				ck[i - 1][3] + abs(ck[i][0] - ck[i - 1][0]) + abs(ck[i][1] - ck[i - 1][1]));
		}
	}
	cout << ck[n - 1][3];
}