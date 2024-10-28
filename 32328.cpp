#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p[76];
	for (int i = 0; i < 76; i++)
		p[i] = 0;
	int n, s;
	cin >> n;
	while (n--) {
		cin >> s;
		p[s]++;
	}
	int lv = 2;
	for (int i = 75; i >= 0; i--) {
		if (lv > 0 && p[i] > 0)
			lv--;
		else if (lv == 0 && p[i] > 0) {
			cout << i << ' ' << p[i];
			return 0;
		}
	}
}