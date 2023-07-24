#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> p[1001];
int emp[1001];
int job[1001];
bool v[1001];

bool match(int a) {
	// a = employer no
	if (a == 0 || v[a]) {
		return false;
	}
	v[a] = true;
	for (int j = 0; j < p[a].size(); j++) {
		int jobnum = p[a].at(j);
		if (job[jobnum] == a) continue;
		if (job[jobnum] == 0 || match(job[jobnum])) {
			emp[a] = jobnum;
			job[jobnum] = a;
			return true;
		}
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int c, ci;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		while (c--) {
			cin >> ci;
			p[i].push_back(ci);
		}
		emp[i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		job[i] = 0;
	}
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			v[j] = false;
		}
		if (match(i)) {
			answer++;
		}
	}
	cout << answer;
}