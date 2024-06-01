#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> nn;
int pre[8];
bool selected[8];
int combined[8];

void bt(int depth, int start) {
	if (depth == m) {
		int checker = 0;
		for (int i = 0; i < m; i++) {
			if (combined[i] <= pre[i])
				checker++;
		}
		if (checker < m) {
			for (int i = 0; i < m; i++) {
				cout << combined[i] << " ";
				pre[i] = combined[i];
			}
			cout << "\n";
		}
	}
	else {
		for (int i = start; i < n; i++) {
			if (!selected[i]) {
				combined[depth] = nn[i];
				selected[i] = true;
				bt(depth + 1, i + 1);
				selected[i] = false;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		nn.push_back(a);
		pre[i] = 0;
	}
	sort(nn.begin(), nn.end());
	bt(0, 0);
}