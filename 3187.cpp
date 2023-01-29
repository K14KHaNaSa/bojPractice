#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int r, c;
	cin >> r >> c;
	vector<vector<int>> map(r, vector<int>(c));
	vector<vector<bool>> check(r, vector<bool>(c, false));
	char area;
	for (int i = 0; i < r; i++) {
		area = cin.get();
		for (int j = 0; j < c; j++) {
			area = cin.get();
			if (area == '.') {
				map[i][j] = 0;
			}
			else if (area == 'k') {
				map[i][j] = 1;//¾ç
			}
			else if (area == 'v') {
				map[i][j] = 2;//´Á
			}
			else if (area == '#') {
				map[i][j] = 9;
			}
		}
	}
	int sheep = 0;
	int wolf = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if ((map[i][j] == 1 || map[i][j] == 2) && check[i][j] == false) {
				int areasheep = 0;
				int areawolf = 0;
				if (map[i][j] == 1) {
					areasheep++;
				}
				else if (map[i][j] == 2) {
					areawolf++;
				}
				check[i][j] = true;
				queue<pair<int, int>> area;
				area.push(make_pair(i,j));
				while (!area.empty()) {
					int u = area.front().first;
					int v = area.front().second;
					area.pop();
					if (u > 0) {
						if (map[u - 1][v] != 9 && check[u - 1][v] == false) {
							if (map[u - 1][v] == 1) {
								areasheep++;
							}
							else if (map[u - 1][v] == 2) {
								areawolf++;
							}
							area.push(make_pair(u - 1, v));
							check[u - 1][v] = true;
						}
					}
					if (u < r - 1) {
						if (map[u + 1][v] != 9 && check[u + 1][v] == false) {
							if (map[u + 1][v] == 1) {
								areasheep++;
							}
							else if (map[u + 1][v] == 2) {
								areawolf++;
							}
							area.push(make_pair(u + 1, v));
							check[u + 1][v] = true;
						}
					}
					if (v > 0) {
						if (map[u][v - 1] != 9 && check[u][v - 1] == false) {
							if (map[u][v - 1] == 1) {
								areasheep++;
							}
							else if (map[u][v - 1] == 2) {
								areawolf++;
							}
							area.push(make_pair(u, v - 1));
							check[u][v - 1] = true;
						}
					}
					if (v < c - 1) {
						if (map[u][v + 1] != 9 && check[u][v + 1] == false) {
							if (map[u][v + 1] == 1) {
								areasheep++;
							}
							else if (map[u][v + 1] == 2) {
								areawolf++;
							}
							area.push(make_pair(u, v + 1));
							check[u][v + 1] = true;
						}
					}
				}
				if (areasheep > areawolf) {
					sheep += areasheep;
				}
				else {
					wolf += areawolf;
				}
			}
		}
	}
	cout << sheep << " " << wolf;
}