#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	float seed = 0;
	float n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		seed += i / (n - i);
	}
	cout << setiosflags(ios::fixed) << setprecision(10) << seed + n;
}