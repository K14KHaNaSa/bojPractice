#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	string s;
	int time = 1200;
	// time Div 12 + 1 로 현재시간 판별
	cin >> n;
	bool reverse = false;
	// false = 시계방향 정방향 / true = 역방향 반시계방향
	for (int i = 0; i < n; i++) {
		cin >> s >> x;
		cout << (time % 12) + 1;
		if (x == ((time % 12) + 1)) {
			if (s == "CLOCK" || s == "WATCH") {
				cout << " YES\n";
			}
			else {
				cout << " NO\n";
			}
		}
		else {
			cout << " NO\n";
		}
		if (s == "HOURGLASS") {
			if (x != ((time % 12) + 1)) {
				if (reverse) {
					reverse = false;
				}
				else {
					reverse = true;
				}
			}
		}
		if (reverse) {
			time--;
		}
		else {
			time++;
		}
	}
}