#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int yt, yj;
	cin >> yt >> yj;
	while (yt < 6 || yj < 6) {
		yj += yt;
		if (yj >= 5) {
			cout << "yt";
			break;
		}
		yt += yj;
		if (yt >= 5) {
			cout << "yj";
			break;
		}
	}
}