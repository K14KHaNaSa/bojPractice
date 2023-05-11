#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, x;
	cin >> n >> m;
	int answer = 0;
	while (n--) {
		bool goal = true;
		for (int i = 0; i < m; i++) {
			cin >> x;
			if (x == 0) {
				goal = false;
			}
		}
		if (goal) {
			answer++;
		}
	}
	cout << answer;
}