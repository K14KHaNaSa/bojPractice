#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, pre, now, i;
	bool jolly[3000];
	while (cin >> n) {
		cin >> pre;
		for (i = 1; i < n; i++)
			jolly[i] = false;
		for (i = 1; i < n; i++) {
			cin >> now;
			jolly[max(now - pre, pre - now)] = true;
			pre = now;
		}
		bool ans = true;
		for (i = 1; i < n; i++)
			if (!jolly[i])
				ans = false;
		ans ? cout << "Jolly\n" : cout << "Not jolly\n";
	}
}