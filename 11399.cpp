#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<unsigned int> atm(n);
	for (int i = 0; i < n; i++) {
		cin >> atm[i];
	}
	sort(atm.begin(), atm.end());
	int atmtime = atm[0];
	for (int i = 1; i < n; i++) {
		atm[i] = atm[i] + atm[i - 1];
		atmtime += atm[i];
	}
	cout << atmtime;
}