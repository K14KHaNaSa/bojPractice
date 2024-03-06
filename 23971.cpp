#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, w, n, m;
	cin >> h >> w >> n >> m;
	int ver = h / (n + 1);
	if (h % (n + 1) > 0)
		ver++;
	int hor = w / (m + 1);
	if (w % (m + 1) > 0)
		hor++;
	cout << ver * hor;
}