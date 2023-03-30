#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int h, w, n;
int map[1000][1000];
int cheese[10][2];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> h >> w >> n;
	char type;
	for (int i = 0; i < h; i++) {
		type = cin.get();
		for (int j = 0; j < w; j++) {
			type = cin.get();
			map[i][j] = 0;
			if (type == 'S') {
				cheese[0][0] = i;
				cheese[0][1] = j;
			}
			else if (type == '1') {
				cheese[1][0] = i;
				cheese[1][1] = j;
			}
			else if (type == '2') {
				cheese[2][0] = i;
				cheese[2][1] = j;
			}
			else if (type == '3') {
				cheese[3][0] = i;
				cheese[3][1] = j;
			}
			else if (type == '4') {
				cheese[4][0] = i;
				cheese[4][1] = j;
			}
			else if (type == '5') {
				cheese[5][0] = i;
				cheese[5][1] = j;
			}
			else if (type == '6') {
				cheese[6][0] = i;
				cheese[6][1] = j;
			}
			else if (type == '7') {
				cheese[7][0] = i;
				cheese[7][1] = j;
			}
			else if (type == '8') {
				cheese[8][0] = i;
				cheese[8][1] = j;
			}
			else if (type == '9') {
				cheese[9][0] = i;
				cheese[9][1] = j;
			}
			else if (type == 'X') {
				map[i][j] = 10;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		queue<tuple<int, int, int>> move;
		move.push(make_tuple(cheese[i][0], cheese[i][1], 0));
		// area'u' , area'v' , movecount
		map[cheese[i][0]][cheese[i][1]] = i + 1;
		int destu = cheese[i + 1][0];
		int destv = cheese[i + 1][1];
		bool cheesebite = false;
		while (!move.empty() && !cheesebite) {
			int u = get<0>(move.front());
			int v = get<1>(move.front());
			int step = get<2>(move.front());
			move.pop();
			if (u > 0 && !cheesebite) {
				if (u - 1 == destu && v == destv) {
					answer += step + 1;
					cheesebite = true;
				}
				else if (map[u - 1][v] < i + 1) {
					map[u - 1][v] = i + 1;
					move.push(make_tuple(u - 1, v, step + 1));
				}
			}
			if (u < h - 1 && !cheesebite) {
				if (u + 1 == destu && v == destv) {
					answer += step + 1;
					cheesebite = true;
				}
				else if (map[u + 1][v] < i + 1) {
					map[u + 1][v] = i + 1;
					move.push(make_tuple(u + 1, v, step + 1));
				}
			}
			if (v > 0 && !cheesebite) {
				if (u == destu && v - 1 == destv) {
					answer += step + 1;
					cheesebite = true;
				}
				else if (map[u][v - 1] < i + 1) {
					map[u][v - 1] = i + 1;
					move.push(make_tuple(u, v - 1, step + 1));
				}
			}
			if (v < w - 1 && !cheesebite) {
				if (u == destu && v + 1 == destv) {
					answer += step + 1;
					cheesebite = true;
				}
				else if (map[u][v + 1] < i + 1) {
					map[u][v + 1] = i + 1;
					move.push(make_tuple(u, v + 1, step + 1));
				}
			}
		}
	}
	cout << answer;
}