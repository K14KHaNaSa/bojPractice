#include <iostream>
using namespace std;

long long int j[100001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, m, o, xyz, i;
	cin >> n >> m;
	j[0] = 1;
	for (i = 1; i <= m; i++) {
		cin >> o >> xyz;
		if (o == 1)
			j[i] = (j[i - 1] - 1 + xyz) % n + 1;
		if (o == 2) {
			j[i] = (j[i - 1] - 1 - xyz % n) + 1;
			if (j[i] < 1)
				j[i] += n;
		}
		if (o == 3)
			j[i] = j[xyz];
	}
	cout << j[m];
}