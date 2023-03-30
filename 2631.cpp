#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> child(n);
	vector<int> hold(n);
	for (int i = 0; i < n; i++) {
		cin >> child[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (child[i] < child[j]) {
				hold[j] = max(hold[j], hold[i] + 1);
			}
		}
	}
	int answer = hold[0];
	for (int i = 1; i < n; i++) {
		answer = max(answer, hold[i]);
	}
	cout << n - answer - 1;
}