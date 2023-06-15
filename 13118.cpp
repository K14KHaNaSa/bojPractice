#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p[4];
	bool hit = false;
	int x, y, r;
	cin >> p[0] >> p[1] >> p[2] >> p[3] >> x >> y >> r;
	for (int i = 0; i < 4; i++) {
		if (x == p[i]) {
			cout << i + 1;
			hit = true;
		}
	}
	if (!hit) {
		cout << "0";
	}
}