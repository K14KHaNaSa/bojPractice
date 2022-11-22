#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int h = 0;
	int i = 0;
	int a = 0;
	int r = 0;
	int c = 0;
	char hiarc;
	int n;
	cin >> n;
	hiarc = cin.get();
	for (int j = 0; j < n; j++) {
		hiarc = cin.get();
		if (hiarc == 'H') {
			h++;
		}
		else if (hiarc == 'A') {
			a++;
		}
		else if (hiarc == 'R') {
			r++;
		}
		else if (hiarc == 'C') {
			c++;
		}
		else if (hiarc == 'I') {
			i++;
		}
	}
	cout << min(min(h, i), min(min(a, r), c));
}