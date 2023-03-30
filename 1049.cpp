#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, s, o;
	cin >> n >> m;
	int six = 1001;
	int one = 1001;
	for (int i = 0; i < m; i++) {
		cin >> s >> o;
		six = min(six, s);
		one = min(one, o);
	}
	cout << (n / 6) * min(six, one * 6) + min(six, (n % 6) * one);
}