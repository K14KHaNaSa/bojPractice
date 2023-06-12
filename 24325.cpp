#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	double a, b;
	cin >> tc;
	while (tc--) {
		cin >> a >> b;
		int answer = int(b - a);
		cout << answer / 50 << "-$50, " << (answer % 50) / 20 << "-$20, " << ((answer % 50) % 20) / 10 << "-$10, " << (answer % 10) / 5 << "-$5, " << answer % 5 << "-$1\n";
	}
}