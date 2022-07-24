#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int m, n;
	vector<unsigned long long int> pnum(1000001,0);
	cin >> m >> n;
	for (int i = 2; i <= sqrt(n); i++) {
		if (pnum[i] == 0) {
			for (int j = 2; i * j <= n; j++) {
				pnum[i * j] = 1;
			}
		}
	}
	pnum[0] = 1;
	pnum[1] = 1;
	pnum[2] = 0;
	pnum[3] = 0;
	for (int i = m; i <= n; i++) {
		if (pnum[i] == 0) {
			cout << i << "\n";
		}
	}
}