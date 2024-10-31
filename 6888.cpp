#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;
	while (x <= y) {
		cout << "All positions change in year " << x << '\n';
		x += 60;
	}
}