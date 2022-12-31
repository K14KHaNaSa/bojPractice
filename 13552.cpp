#include <iostream>
using namespace std;

long  int pointx[100000];
long  int pointy[100000];
long  int pointz[100000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, x, y, z, m, r;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> pointx[i] >> pointy[i] >> pointz[i];
	}
	cin >> m;
	long int insidepoints;
	for (int i = 0; i < m; i++) {
		cin >> x >> y >> z >> r;
		insidepoints = 0;
		for (int j = 0; j < n; j++) {
			long int px = pointx[j] - x;
			long int py = pointy[j] - y;
			long int pz = pointz[j] - z;
			if (px * px + py * py + pz * pz <= r * r) {
				insidepoints++;
			}
		}
		cout << insidepoints << "\n";
	}
}