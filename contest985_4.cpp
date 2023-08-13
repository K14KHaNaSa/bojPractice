#include <iostream>
using namespace std;

int n;
int arr[101][101];
int temp[101][101];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, q1, q2;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> q;
	while (q--) {
		cin >> q1;
		if (q1 == 1) {
			cin >> q2;
			arr[q2][0] = arr[q2][n];
			for (int i = n; i > 0; i--) {
				arr[q2][i] = arr[q2][i - 1];
			}
		}
		else if (q1 == 2) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					temp[j][n - i + 1] = arr[i][j];
				}
			}
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					arr[i][j] = temp[i][j];
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}