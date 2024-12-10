#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	long long int t[36];
	t[0] = 1;
	t[1] = 1;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		t[i] = 0;
		for (int j = 0; j < i; j++)
			t[i] += t[j] * t[i - 1 - j];
	}
	cout << t[n];
}