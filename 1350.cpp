#include <iostream>
using namespace std;

int f[50];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f[i];
	}
	cin >> c;
	long long int answer = 0;
	for (int i = 0; i < n; i++) {
		if (f[i] > 0) {
			answer += f[i] / c;
			if (f[i] % c > 0) {
				answer++;
			}
		}
	}
	cout << answer * c;
}