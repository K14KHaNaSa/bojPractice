#include <iostream>
#include <cmath>
using namespace std;

int n, m;
double s, v;
int zz[101]; //zzikzzik
int h[101]; // hole
double ma[101][2]; // mice area
double ha[101][2]; // hole area
bool visit[101];

bool mih(int mnum) {
	if (visit[mnum] || mnum == 0) {
		return false;
	}
	visit[mnum] = true;
	double zx = ma[mnum][0];
	double zy = ma[mnum][1];
	for (int i = 1; i <= m; i++) {
		double hx = ha[i][0];
		double hy = ha[i][1];
		double dist = (hx - zx) * (hx - zx) + (hy - zy) * (hy - zy);
		if ((dist <= s * s * v * v) && ((h[i] == 0) || mih(h[i]))) {
			h[i] = mnum;
			zz[mnum] = i;
			return true;
		}
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> s >> v;
	for (int i = 1; i <= n; i++) {
		cin >> ma[i][0] >> ma[i][1];
		zz[i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		cin >> ha[i][0] >> ha[i][1];
		h[i] = 0;
	}
	int answer = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			visit[j] = false;
		}
		if (mih(i)) {
			answer--;
		}
	}
	cout << answer;
}