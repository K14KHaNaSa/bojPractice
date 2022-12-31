#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, num, answer;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		answer = 0;
		for (int j = 0; j < n; j++) {
			cin >> num;
			answer += num;
		}
		cout << answer << "\n";
	}
}