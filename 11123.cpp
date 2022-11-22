#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

char field[100][100];
queue<pair<int, int>> moving;
int h, w;

void group(int x, int y) {
	moving.push(pair<int, int>(x, y));
	while (!moving.empty()) {
		int nowx = moving.front().first;
		int nowy = moving.front().second;
		moving.pop();
		if (nowx > 0) {
			if (field[nowx - 1][nowy] == '#') {
				field[nowx - 1][nowy] = '.';
				moving.push(pair<int, int>(nowx - 1, nowy));
			}
		}
		if (nowy > 0) {
			if (field[nowx][nowy - 1] == '#') {
				field[nowx][nowy - 1] = '.';
				moving.push(pair<int, int>(nowx, nowy - 1));
			}
		}
		if (nowx < h - 1) {
			if (field[nowx + 1][nowy] == '#') {
				field[nowx + 1][nowy] = '.';
				moving.push(pair<int, int>(nowx + 1, nowy));
			}
		}
		if (nowy < w - 1) {
			if (field[nowx][nowy + 1] == '#') {
				field[nowx][nowy + 1] = '.';
				moving.push(pair<int, int>(nowx, nowy + 1));
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	char sheep;
	int t, answer;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w;
		sheep = cin.get();
		for (int j = 0; j < h; j++) {
			for (int k = 0; k < w; k++) {
				sheep = cin.get();
				if (sheep == '#') {
					field[j][k] = '#';
				}
				if (sheep == '.') {
					field[j][k] = '.';
				}
			}
			sheep = cin.get();
		}
		answer = 0;
		for (int j = 0; j < h; j++) {
			for (int k = 0; k < w; k++) {
				if (field[j][k] == '#') {
					group(j, k);
					answer++;
				}
			}
		}
		cout << answer << "\n";
	}
}