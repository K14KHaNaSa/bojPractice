#include <iostream>
#include <vector>
using namespace std;

int n, m;
int stu[101];
int lap[5001];
bool v[101];
vector<int> wanted[101];

bool matching(int stunum) {
	if (v[stunum] || stunum == 0) {
		return false;
	}
	v[stunum] = true;
	for (int i = 0; i < wanted[stunum].size(); i++) {
		int lpnum = wanted[stunum][i]; //laptop num
		if (stu[stunum] == lpnum) continue;
		if (lap[lpnum] == 0 || matching(lap[lpnum])) {
			stu[stunum] = lpnum;
			lap[lpnum] = stunum;
			return true;
		}
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		stu[i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		wanted[a].push_back(b);
		lap[i] = 0;
	}
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i <= n; i++) {
			v[i] = false;
		}
		if (matching(i)) {
			answer++;
		}
	}
	cout << answer;
}