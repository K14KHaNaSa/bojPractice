#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int k;
	cin >> k;
	vector<int> a(k + 1);
	vector<int> b(k + 1);
	int tempa;
	int tempb;
	a[0] = 1;
	b[0] = 0;
	for (int i = 1; i <= k; i++) {
		tempa = b[i - 1];
		tempb = a[i - 1] + b[i - 1];
		a[i] = tempa;
		b[i] = tempb;
	}
	cout << a[k] << " " << b[k];
}