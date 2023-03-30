#include <iostream>
#include <vector>
using namespace std;

int ball[100];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int i, j, k;
	for (int a = 0; a < m; a++) {
		cin >> i >> j >> k;
		for (int b = i - 1; b < j; b++) {
			ball[b] = k;
		}
	}
	for (int a = 0; a < n; a++) {
		cout << ball[a] << " ";
	}
}