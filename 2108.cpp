#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> appear(8001, 0); // -4000 ~ 0 ~ 4000  (input + 4000)
	int n;
	cin >> n;
	vector<int> arr(n);
	cin >> arr[0];
	int sum = arr[0];
	appear[arr[0] + 4000] = 1;
	int maxnum = arr[0];
	int minnum = arr[0];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		appear[arr[i] + 4000] += 1;
		maxnum = max(maxnum, arr[i]);
		minnum = min(minnum, arr[i]);
	}
	sort(arr.begin(), arr.end());
	double r = round(double(sum) / n);
	if (r == -0) {
		r = 0;
	}
	cout << r << "\n" << arr[n / 2] << "\n";
	int mode = minnum;
	int mcount = appear[minnum + 4000];
	bool samemin = true;
	for (int i = minnum + 4001; i <= maxnum + 4000; i++) {
		if (appear[i] > mcount) {
			mode = i - 4000;
			mcount = appear[i];
			samemin = true;
		}
		else if (appear[i] == mcount && samemin) {
			mode = i - 4000;
			samemin = false;
		}
	}
	cout << mode << "\n" << maxnum - minnum;
}