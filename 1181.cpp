#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a[20000];

bool cmp(string l, string r) {
	if (l.length() == r.length())
		return l < r;
	else
		return l.length() < r.length();
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	cout << a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] != a[i - 1]) {
			cout << "\n" << a[i];
		}
	}
}