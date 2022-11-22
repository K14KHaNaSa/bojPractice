#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long int p, q, temp;
	p = 1;
	q = a[n-1];
	for (int i = n - 1; i > 0; i--) {
		p += q * a[i - 1];
		temp = q;
		q = p;
		p = temp;
	}
	cout << q - p << " " << q;
}