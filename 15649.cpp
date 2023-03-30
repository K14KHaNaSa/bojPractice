#include <iostream>
using namespace std;

bool visit[9];
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
			if (!visit[i]) {
				outs[m - depth] = i;
				visit[i] = true;
				bt(depth - 1);
				visit[i] = false;
			}
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