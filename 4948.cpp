#include <iostream>
using namespace std;

int p[246913];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	p[0] = 0;
	p[1] = 0;
	for (int i = 2; i < 246913; i++)
		p[i] = 1;
	for (int i = 2; i < 246913; i++) {
		if (p[i] > 0) {
			for (int j = 2; i * j < 246913; j++)
				p[i * j] = 0;
		}
		p[i] += p[i - 1];
	}
	cin >> n;
	while (n > 0) {
		cout << p[n * 2] - p[n] << '\n';
		cin >> n;
	}
}