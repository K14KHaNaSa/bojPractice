#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> want[201];
int cow[201];
int home[201];
bool v[201];

bool gohome(int cownum) {
	if (cownum == 0 || v[cownum]) {
		return false;
	}
	v[cownum] = true;
	for (int i = 0; i < want[cownum].size(); i++) {
		int wh = want[cownum].at(i); // wanthome
		if (home[wh] == 0 || gohome(home[wh])) {
			cow[cownum] = wh;
			home[wh] = cownum;
			return true;
		}
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int s, si;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		while (s--) {
			cin >> si;
			want[i].push_back(si);
		}
	}
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			v[j] = false;
		}
		if (gohome(i)) {
			answer++;
		}
	}
	cout << answer;
}