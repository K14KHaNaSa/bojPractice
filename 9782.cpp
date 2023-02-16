#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, nums;
	int t = 1;
	cin >> n;
	while (n != 0) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		if (n % 2 == 1) {
			cout << fixed << "Case " << t << ": " << v[n / 2] << ".0\n";
		}
		else {
			double a = v[n / 2];
			a += v[n / 2 - 1];
			cout << fixed << setprecision(1) << "Case " << t << ": " << a / 2 << "\n";
		}
		t++;
		cin >> n;
	}
}