#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	double score;
	vector<double> lowseven(8, 100.000);
	for (int i = 0; i < 7; i++) {
		cin >> lowseven[i];
	}
	sort(lowseven.begin(), lowseven.end());
	for (int i = 7; i < n; i++) {
		cin >> score;
		if (lowseven[6] >= score) {
			lowseven[7] = score;
			for (int j = 6; j >= 0; j--) {
				if (lowseven[j] >= lowseven[j+1]) {
					double temp = lowseven[j];
					lowseven[j] = lowseven[j + 1];
					lowseven[j + 1] = temp;
				}
				else {
					break;
				}
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << fixed << setprecision(3) << lowseven[i] << "\n";
	}
}