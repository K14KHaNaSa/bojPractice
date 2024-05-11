#include <iostream>
using namespace std;

int alph(string c) {
	if (c == "A" || c == "F" || c == "H" || c == "K" || c == "M")
		return 3;
	else if (c == "B" || c == "D" || c == "N" || c == "P" || c == "Q" || c == "R" || c == "T" || c == "X" || c == "Y")
		return 2;
	else if (c == "E")
		return 4;
	else
		return 1;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a[200];
	int n, m, i, j;
	string l, r;
	cin >> n >> m;
	cin >> l >> r;
	for (i = 0; i < min(l.length(), r.length()); i++) {
		a[i * 2] = alph(l.substr(i, 1));
		a[i * 2 + 1] = alph(r.substr(i, 1));
	}
	if (l.length() > r.length()) {
		for (j = 0; j < l.length() - i; j++)
			a[i * 2 + j] = alph(l.substr(i + j, 1));
	}
	if (l.length() < r.length()) {
		for (int j = 0; j < r.length() - i; j++)
			a[i * 2 + j] = alph(r.substr(i + j, 1));
	}
	for (i = n + m - 1; i > 1; i--) {
		for (j = 0; j <= i; j++)
			a[j] = (a[j] + a[j + 1]) % 10;
	}
	cout << a[0] * 10 + a[1] << "%";
}