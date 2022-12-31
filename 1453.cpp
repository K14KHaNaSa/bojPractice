#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, pcnum;
	int naga = 0;
	vector<int> pc(100);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> pcnum;
		if (pc[pcnum - 1]) {
			naga++;
		}
		else {
			pc[pcnum - 1] = true;
		}
	}
	cout << naga;
}