#include <iostream>
using namespace std;

int outs[8];
int n, m;

void bt(int depth) {
	if (depth == 0) {
		for (int i = 0; i < m; i++) {
			cout << outs[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n; i++) {
			outs[m - depth] = i;
			bt(depth - 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	bt(m);
}