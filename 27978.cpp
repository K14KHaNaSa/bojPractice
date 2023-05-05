#include <iostream>
#include <queue>
using namespace std;

int fuel[500][500];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, w;
	int eu, ev;
	char maptype;
	cin >> h >> w;
	queue<pair<int, int>> wave;
	for (int i = 0; i < h; i++) {
		maptype = cin.get();
		for (int j = 0; j < w; j++) {
			maptype = cin.get();
			if (maptype == '#') {
				fuel[i][j] = 1000001;
			}
			else if (maptype == '.') {
				fuel[i][j] = 500001;
			}
			else if (maptype == 'K') {
				wave.push(make_pair(i, j));
				fuel[i][j] = 0;
			}
			else if (maptype == '*') {
				fuel[i][j] = 500001;
				eu = i;
				ev = j;
			}
		}
	}
	while (!wave.empty()) {
		int u = wave.front().first;
		int v = wave.front().second;
		wave.pop();
		int fl = fuel[u][v];
		if (v < w - 1) {
			if (u > 0) {
				if (fuel[u - 1][v + 1] < 1000001 && fuel[u - 1][v + 1] > fl) {
					fuel[u - 1][v + 1] = fl;
					wave.push(make_pair(u - 1, v + 1));
				}
			}
			if (fuel[u][v + 1] < 1000001 && fuel[u][v + 1] > fl) {
				fuel[u][v + 1] = fl;
				wave.push(make_pair(u, v + 1));
			}
			if (u < h - 1) {
				if (fuel[u + 1][v + 1] < 1000001 && fuel[u + 1][v + 1] > fl) {
					fuel[u + 1][v + 1] = fl;
					wave.push(make_pair(u + 1, v + 1));
				}
			}
		}
		if (v > 0) {
			if (u > 0) {
				if (fuel[u - 1][v - 1] < 1000001 && fuel[u - 1][v - 1] > fl + 1) {
					fuel[u - 1][v - 1] = fl + 1;
					wave.push(make_pair(u - 1, v - 1));
				}
			}
			if (fuel[u][v - 1] < 1000001 && fuel[u][v - 1] > fl + 1) {
				fuel[u][v - 1] = fl + 1;
				wave.push(make_pair(u, v - 1));
			}
			if (u < h - 1) {
				if (fuel[u + 1][v - 1] < 1000001 && fuel[u + 1][v - 1] > fl + 1) {
					fuel[u + 1][v - 1] = fl + 1;
					wave.push(make_pair(u + 1, v - 1));
				}
			}
		}
		if (u > 0) {
			if (fuel[u - 1][v] < 1000001 && fuel[u - 1][v] > fl + 1) {
				fuel[u - 1][v] = fl + 1;
				wave.push(make_pair(u - 1, v));
			}
		}
		if (u < h - 1) {
			if (fuel[u + 1][v] < 1000001 && fuel[u + 1][v] > fl + 1) {
				fuel[u + 1][v] = fl + 1;
				wave.push(make_pair(u + 1, v));
			}
		}
	}
	if (fuel[eu][ev] > 500000) {
		cout << "-1";
	}
	else {
		cout << fuel[eu][ev];
	}
}