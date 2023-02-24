#include <iostream>
using namespace std;

int a[250000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int mini = 1000000001;
	int maxi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mini = min(mini, a[i]);
		maxi = max(maxi, a[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << max(maxi - a[i], a[i] - mini) << "\n";
	}
}