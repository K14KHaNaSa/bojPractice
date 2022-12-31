#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, answer;
	cin >> t;
	answer = 0;
	for (int i = 0; i < t; i++) {
		cin >> n;
		answer += n;
	}
	cout << answer;
}