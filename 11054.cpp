#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> asc(n);
	vector<int> desc(n);
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				asc[j] = max(asc[j], asc[i] + 1);
			}
			if (arr[i] > arr[j]) {
				desc[j] = max(desc[j], max(asc[i], desc[i]) + 1);
			}
		}
		answer = max(answer, max(asc[i], desc[i]));
	}
	cout << answer + 1;
}