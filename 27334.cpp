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
	int arr[100]; // not sort, for result
	vector<int> a(n); // sort
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		a[i] = arr[i];
	}
	sort(a.begin(), a.end());
	vector<int> ranking(n);
	ranking[0] = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1]) {
			ranking[i] = ranking[i - 1];
		}
		else {
			ranking[i] = i + 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] == a[j]) {
				cout << ranking[j] << "\n";
				break;
			}
		}
	}
}