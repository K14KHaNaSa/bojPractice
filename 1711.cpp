#include <iostream>
using namespace std;

int n;
int answer;
long long int p[1500][2]; // (x, y)
int tri[3];

void bt(int ps, int pnt) {
	if (ps == 3) {
		int a = tri[0];
		int b = tri[1];
		int c = tri[2];
		long long ab = (p[a][0] - p[b][0]) * (p[a][0] - p[b][0]) + (p[a][1] - p[b][1]) * (p[a][1] - p[b][1]);
		long long ac = (p[a][0] - p[c][0]) * (p[a][0] - p[c][0]) + (p[a][1] - p[c][1]) * (p[a][1] - p[c][1]);
		long long bc = (p[b][0] - p[c][0]) * (p[b][0] - p[c][0]) + (p[b][1] - p[c][1]) * (p[b][1] - p[c][1]);
		if (ab + ac == bc) {
			answer++;
		}
		else if (ab + bc == ac) {
			answer++;
		}
		else if (ac + bc == ab) {
			answer++;
		}
	}
	else {
		for (int i = pnt; i < n; i++) {
			tri[ps] = i;
			bt(ps + 1, i + 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	answer = 0;
	for (int i = 0; i < n; i++) {
		cin >> p[i][0] >> p[i][1];
	}
	bt(0, 0);
	cout << answer;
}