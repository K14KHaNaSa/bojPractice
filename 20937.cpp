#include <iostream>
using namespace std;

int sz[50001] = { 0, };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, c;
	int tower = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		sz[c]++;
	}
	for (int i = 1; i <= 50000; i++) {
		tower = max(tower, sz[i]);
	}
	cout << tower;
}