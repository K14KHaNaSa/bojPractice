#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<unsigned long long int> pn(n);
	pn[0] = 1;
	if (n > 1) {
		pn[1] = 1;
		for (int i = 2; i < n; i++) {
			pn[i] = pn[i - 1] + pn[i - 2];
		}
	}
	cout << pn[n - 1];
}