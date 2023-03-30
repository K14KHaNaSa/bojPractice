#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, book;
	cin >> n >> m;
	int bag = 0;
	int answer = 0;
	for (int i = 0; i < n; i++) {
		cin >> book;
		if (bag + book > m) {
			answer++;
			bag = 0;
		}
		bag += book;
	}
	if (bag > 0) {
		answer++;
	}
	cout << answer;
}