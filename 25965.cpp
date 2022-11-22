#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	long int kill[100];
	long int death[100];
	long int assist[100];
	int n, m, k, d, a;
	long int earn;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		earn = 0;
		for (int j = 0; j < m; j++) {
			cin >> kill[j] >> death[j] >> assist[j];
		}
		cin >> k >> d >> a;
		for (int j = 0; j < m; j++) {
			if ((kill[j] * k + assist[j] * a) > death[j] * d) {
				earn += ((kill[j] * k + assist[j] * a) - death[j] * d);
			}
		}
		cout << earn << "\n";
	}
}