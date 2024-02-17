#include <iostream>
using namespace std;

int a[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, ai;
	cin >> n;
	int need_to_change = 0;
	for (int i = 0; i < n; i++) {
		cin >> ai;
		a[i] = ai - 1;
		if (ai - 1 == i)
			need_to_change++;
	}
	cout << need_to_change << "\n";
	if (need_to_change == n) { // all node itself
		cout << "2 1 ";
		for (int i = 2; i < n; i++)
			cout << "1 ";
	}
	else {
		for (int i = 0; i < n; i++) {
			if (a[i] != i)
				cout << a[i] + 1 << " ";
			else {
				if (i > 0)
					cout << "1 ";
				else
					cout << "2 ";
			}
		}
	}
}