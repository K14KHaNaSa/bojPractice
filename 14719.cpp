#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, w;
	int answer = 0;
	cin >> h >> w;
	vector<int> world(w);
	for (int i = 0; i < w; i++) {
		cin >> world[i];
	}
	for (int i = 0; i < h; i++) {
		bool waterzone = false;
		int water = 0;
		for (int j = 0; j < w - 1; j++) {
			if (!waterzone) {
				if (world[j] > i && world[j + 1] <= i) {
					waterzone = true;
				}
			}
			else {
				if (world[j] <= i) {
					water++;
				}
				if (world[j + 1] > i) {
					waterzone = false;
					answer += water;
					water = 0;
				}
			}
		}
		if (world[w - 1] > i) {
			answer += water;
		}
	}
	cout << answer;
}