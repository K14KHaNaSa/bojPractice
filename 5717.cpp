#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, f;
	cin >> m >> f;
	while (m + f != 0) {
		cout << m + f << "\n";
		cin >> m >> f;
	}
}