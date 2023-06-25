#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, first, a;
	cin >> n >> k;
	cin >> first;
	int choco = 0;
	int day = 0;
	n--;
	while (n--) {
		cin >> a;
		if (a > first) {
			day++;
		}
		choco += a - first;
	}
	cout << choco << " " << day;
}