#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string nation;
	cin >> n;
	int visit[8] = { 0 };
	// 0 ~ 3 botswana, ethiopia, kenya, namibia
	// 4 ~ 7 south-africa, tanzania, zambia, zimbabwe
	for (int i = 1; i <= n; i++) {
		cin >> nation;
		if (nation == "botswana") {
			visit[0] = i;
		}
		else if (nation == "ethiopia") {
			visit[1] = i;
		}
		else if (nation == "kenya") {
			visit[2] = i;
		}
		else if (nation == "namibia") {
			visit[3] = i;
		}
		else if (nation == "south-africa") {
			visit[4] = i;
		}
		else if (nation == "tanzania") {
			visit[5] = i;
		}
		else if (nation == "zambia") {
			visit[6] = i;
		}
		else if (nation == "zimbabwe") {
			visit[7] = i;
		}
	}
	int cost = 0;
	for (int i = 0; i < 8; i++) {
		if (visit[i] != 0) {
			if (i == 3) {
				if (visit[4] < visit[3] && visit[4] != 0) {
					cost += 40;
				}
				else {
					cost += 140;
				}
			}
			else if (i == 6) {
				if (visit[7] != 0 && (visit[6] - visit[7] == 1 || visit[7] - visit[6] == 1)) {
					cost -= 30;
				}
				cost += 50;
			}
			else if (i == 7) {
				cost += 30;
			}
			else if (i == 1 || i == 2 || i == 5) {
				cost += 50;
			}
		}
	}
	cout << cost;
}