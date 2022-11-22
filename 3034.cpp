#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, w, h, criterion, l;
	cin >> n >> w >> h;
	criterion = sqrt(pow(w, 2) + pow(h, 2));
	for (int i = 0; i < n; i++) {
		cin >> l;
		if (l <= criterion) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}
	}
}