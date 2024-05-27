#include <iostream>
using namespace std;

int n;
unsigned long long int map[30]; // only save horizontal
unsigned long long int p[59]; // save pow value

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int m;
	cin >> n;
	p[0] = 1;
	for (int i = 1; i <= (n - 1) * 2; i++)
		p[i] = p[i - 1] * 2;
	cin >> map[0];
	map[0] *= p[(n - 1) * 2];
	for (int j = 1; j < n; j++) {
		cin >> map[j];
		map[j] = map[j - 1] + map[j] * p[(n - 1) * 2 - j];
	}
	for (int i = 1; i < n; i++) {
		cin >> m;
		map[0] += m * p[(n - 1) * 2 - i];
		for (int j = 1; j < n; j++) {
			cin >> m;
			map[j] = max(map[j], map[j - 1]) + m * p[(n - 1) * 2 - (i + j)];
		}
	}
	cout << map[n - 1];
}