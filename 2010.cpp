#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, mtab;
	int plg = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> mtab;
		plg += mtab;
	}
	cout << plg - n + 1;
}