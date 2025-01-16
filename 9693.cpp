#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, nm;
	cin >> n;
	int t = 1;
	while (n > 0) {
		m = 0;
		for (int i = 5; i <= n; i += 5) {
			nm = 0;
			for (int j = 5; j <= i; j *= 5) {
				if (i % j == 0)
					nm++;
			}
			m += nm;
		}
		cout << "Case #" << t << ": " << m << "\n";
		t++;
		cin >> n;
	}
}