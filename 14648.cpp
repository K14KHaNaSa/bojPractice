#include <iostream>
using namespace std;

int arr[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q, q12, a, b, c, d;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (q--) {
		cin >> q12;
		long long int answer = 0;
		if (q12 == 1) {
			cin >> a >> b;
			for (int i = a - 1; i < b; i++) {
				answer += arr[i];
			}
			int temp = arr[b - 1];
			arr[b - 1] = arr[a - 1];
			arr[a - 1] = temp;
			cout << answer << "\n";
		}
		else if (q12 == 2) {
			cin >> a >> b >> c >> d;
			long long int m = 0;
			for (int i = a - 1; i < b; i++) {
				answer += arr[i];
			}
			for (int i = c - 1; i < d; i++) {
				m += arr[i];
			}
			cout << answer - m << "\n";
		}
	}
}