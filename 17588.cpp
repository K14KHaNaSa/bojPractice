#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, start, end, input;
	cin >> n;
	vector<bool> appear(201);
	for (int i = 0; i < n; i++) {
		cin >> input;
		appear[input] = true;
		if (i == n - 1) {
			end = input;
		}
	}
	bool gj = true;
	for (int i = 1; i <= end; i++) {
		if (appear[i] == false) {
			gj = false;
			cout << i << '\n';
		}
	}
	if (gj) {
		cout << "good job";
	}
}