#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int w, h, x, y, p, px, py;
	cin >> w >> h >> x >> y >> p;
	int player = 0;
	for (int i = 0; i < p; i++) {
		cin >> px >> py;
		if (px < x) {
			if (sqrt(pow(x - px, 2) + pow((y + h / 2) - py, 2)) <= h / 2) {
				player++;
			}
		}
		else if (px <= x + w) {
			if (py >= y && py <= y + h) {
				player++;
			}
		}
		else {
			if (sqrt(pow(px - (x + w), 2) + pow((y + h / 2) - py, 2)) <= h / 2) {
				player++;
			}
		}
	}
	cout << player;
}