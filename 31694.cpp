#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> algosia(18);
	vector<int> bajtek(18);
	int s;
	int algosia_sum = 0;
	int bajtek_sum = 0;
	for (int i = 0; i < 18; i++) {
		cin >> algosia[i];
		algosia_sum += algosia[i];
	}
	for (int i = 0; i < 18; i++) {
		cin >> bajtek[i];
		bajtek_sum += bajtek[i];
	}
	if (algosia_sum > bajtek_sum)
		cout << "Algosia";
	else if (algosia_sum < bajtek_sum)
		cout << "Bajtek";
	else {
		sort(algosia.rbegin(), algosia.rend());
		sort(bajtek.rbegin(), bajtek.rend());
		for (int i = 0; i < 18; i++) {
			if (algosia[i] > bajtek[i]) {
				cout << "Algosia";
				return 0;
			}
			else if (algosia[i] < bajtek[i]) {
				cout << "Bajtek";
				return 0;
			}
		}
		cout << "remis";
	}
}