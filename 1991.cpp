#include <iostream>
using namespace std;
int tree[26][2] = { 0, };

void prt(int root) {
	cout << char(root + 65);
	if (tree[root][0] != 0) {
		prt(tree[root][0]);
	}
	if (tree[root][1] != 0) {
		prt(tree[root][1]);
	}
}
void iot(int root) {
	if (tree[root][0] != 0) {
		iot(tree[root][0]);
	}
	cout << char(root + 65);
	if (tree[root][1] != 0) {
		iot(tree[root][1]);
	}
}
void pot(int root) {
	if (tree[root][0] != 0) {
		pot(tree[root][0]);
	}
	if (tree[root][1] != 0) {
		pot(tree[root][1]);
	}
	cout << char(root + 65);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char rt, l, r;
	// A = 65 / Z = 90
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rt >> l >> r;
		int rtno = int(rt) - 65;
		if (l != '.') {
			tree[rtno][0] = int(l) - 65;
		}
		if (r != '.') {
			tree[rtno][1] = int(r) - 65;
		}
	}
	prt(0);
	cout << "\n";
	iot(0);
	cout << "\n";
	pot(0);
}