#include <iostream>
#include <queue>
using namespace std;

int n;
int map[100][100];
char order[10001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, l, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[i][j] = 0;
		}
	}
	cin >> k;
	int ku, kv;
	while (k--) {
		cin >> ku >> kv;
		map[ku - 1][kv - 1]--; // apple on map
	}
	cin >> l;
	char c;
	while (l--) {
		cin >> x >> c;
		order[x] = c;
	}
	int answer = 1; // == playtime
	int snakesize = 1; // increase if snake bite apple
	int dir = 1; // 0 - up / 1 - right / 2 - down / 3 - left
	deque<pair<int, int>> snake; //snake body
	snake.push_front(make_pair(0, 0));
	map[0][0] = 1;
	bool play = true;
	while (play) {
		int u = snake.front().first; //snake head u, v
		int v = snake.front().second;
		//move head
		if (dir == 0) {
			if (u == 0) {
				play = false;
				break;
			}
			else if (map[u - 1][v] > 0) {
				play = false;
				break;
			}
			else {
				if (map[u - 1][v] == -1) { // eat and bodysize++ if apple exist
					snakesize++;
					map[u - 1][v] = 0;
				}
				snake.push_front(make_pair(u - 1, v));
			}
		}
		else if (dir == 1) {
			if (v == n - 1) {
				play = false;
				break;
			}
			else if (map[u][v + 1] > 0) {
				play = false;
				break;
			}
			else {
				if (map[u][v + 1] == -1) {
					snakesize++;
					map[u][v + 1] = 0;
				}
				snake.push_front(make_pair(u, v + 1));
			}
		}
		else if (dir == 2) {
			if (u == n - 1) {
				play = false;
				break;
			}
			else if (map[u + 1][v] > 0) {
				play = false;
				break;
			}
			else {
				if (map[u + 1][v] == -1) {
					snakesize++;
					map[u + 1][v] = 0;
				}
				snake.push_front(make_pair(u + 1, v));
			}
		}
		else if (dir == 3) {
			if (v == 0) {
				play = false;
				break;
			}
			else if (map[u][v - 1] > 0) {
				play = false;
				break;
			}
			else {
				if (map[u][v - 1] == -1) {
					snakesize++;
					map[u][v - 1] = 0;
				}
				snake.push_front(make_pair(u, v - 1));
			}
		}
		if (play) {
			for (int i = 0; i < snake.size(); i++) { //move body
				int bodyu = snake.front().first;
				int bodyv = snake.front().second;
				snake.pop_front();
				if (map[bodyu][bodyv] < snakesize) {
					map[bodyu][bodyv]++;
					snake.push_back(make_pair(bodyu, bodyv));
				}
				else {
					map[bodyu][bodyv] = 0;
				}
			}
			if (order[answer] == 'L' || order[answer] == 'D') {
				//turn after move head
				if (order[answer] == 'L') {
					dir--;
					if (dir < 0) {
						dir = 3;
					}
				}
				if (order[answer] == 'D') {
					dir++;
					if (dir > 3) {
						dir = 0;
					}
				}
			}
			answer++;
		}
	}
	cout << answer;
}