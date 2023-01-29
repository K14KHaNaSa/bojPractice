#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	string s;
	int time = 1200;
	// time Div 12 + 1 �� ����ð� �Ǻ�
	cin >> n;
	bool reverse = false;
	// false = �ð���� ������ / true = ������ �ݽð����
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