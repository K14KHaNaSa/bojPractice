#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, answer;
	cin >> n;
	int card[33];
	cin >> card[0];
	answer = card[0];
	for (int i = 1; i < n; i++) {
		cin >> card[i];
		if (card[i] - card[i - 1] > 1) {
			answer += card[i];
		}
	}
	cout << answer;
}