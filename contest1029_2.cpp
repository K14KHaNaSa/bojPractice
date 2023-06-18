#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k, f, d;
	cin >> n >> m >> k;
	int answer = 1;
	cin >> f >> d;
	int shortest = f + m - d;
	for (int i = 2; i <= k; i++) {
		cin >> f >> d;
		if (f + m - d < shortest) {
			shortest = f + m - d;
			answer = i;
		}
	}
	cout << answer;
}