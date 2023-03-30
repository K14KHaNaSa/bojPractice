#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> mxsum(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mxsum[i] = a[i];
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				mxsum[j] = max(mxsum[j], mxsum[i] + a[j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		answer = max(answer, mxsum[i]);
	}
	cout << answer;
}