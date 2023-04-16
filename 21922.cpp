#include <iostream>
#include <queue>
using namespace std;

int n, m;
int lab[2000][2000]; // 1~4 = obj
bool cool[2000][2000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	queue<pair<int, pair<int, int>>> blow; // direction "from" , (search u, search v)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> lab[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (lab[i][j] == 9) {
				cool[i][j] = true;
				if (i > 0) {
					if (i > 1) {
						if (lab[i - 1][j] != 9) {
							blow.push(make_pair(1, make_pair(i - 1, j)));
						}
					}
					else {
						blow.push(make_pair(1, make_pair(i - 1, j)));
					}
				}
				if (j < m - 1) {
					if (j < m - 2) {
						if (lab[i][j + 1] != 9) {
							blow.push(make_pair(2, make_pair(i, j + 1)));
						}
					}
					else {
						blow.push(make_pair(2, make_pair(i, j + 1)));
					}
				}
				if (j > 0) {
					if (j > 1) {
						if (lab[i][j - 1] != 9) {
							blow.push(make_pair(3, make_pair(i, j - 1)));
						}
					}
					else {
						blow.push(make_pair(3, make_pair(i, j - 1)));
					}
				}
				if (i < n - 1) {
					if (i < n - 2) {
						if (lab[i + 1][j] != 9) {
							blow.push(make_pair(4, make_pair(i + 1, j)));
						}
					}
					else {
						blow.push(make_pair(4, make_pair(i + 1, j)));
					}
				}
			}
		}
	}
	// <- 1 / down 2 / up 3 / -> 4 // DDR SP Line

	while (!blow.empty()) {
		int dir = blow.front().first;
		int u = blow.front().second.first;
		int v = blow.front().second.second;
		cool[u][v] = true;
		blow.pop();
		if (lab[u][v] == 0) { //empty
			switch (dir) {
			case 1: if (u > 0) {
				blow.push(make_pair(1, make_pair(u - 1, v)));
			}break;
			case 2: if (v < m - 1) {
				blow.push(make_pair(2, make_pair(u, v + 1)));
			}break;
			case 3: if (v > 0) {
				blow.push(make_pair(3, make_pair(u, v - 1)));
			}break;
			case 4: if (u < n - 1) {
				blow.push(make_pair(4, make_pair(u + 1, v)));
			}break;
			}
		}
		else if (lab[u][v] == 2) { // obj [-]
			switch (dir) {
			case 2: if (v < m - 1) {
				blow.push(make_pair(2, make_pair(u, v + 1)));
			}break;
			case 3: if (v > 0) {
				blow.push(make_pair(3, make_pair(u, v - 1)));
			}break;
			}
		}
		else if (lab[u][v] == 1) { // obj [|]
			switch (dir) {
			case 1: if (u > 0) {
				blow.push(make_pair(1, make_pair(u - 1, v)));
			}break;
			case 4: if (u < n - 1) {
				blow.push(make_pair(4, make_pair(u + 1, v)));
			}break;
			}
		}
		else if (lab[u][v] == 3) { // obj [/]
			switch (dir) {
			case 2: if (u > 0) {
				blow.push(make_pair(1, make_pair(u - 1, v)));
			}break;
			case 1: if (v < m - 1) {
				blow.push(make_pair(2, make_pair(u, v + 1)));
			}break;
			case 4: if (v > 0) {
				blow.push(make_pair(3, make_pair(u, v - 1)));
			}break;
			case 3: if (u < n - 1) {
				blow.push(make_pair(4, make_pair(u + 1, v)));
			}break;
			}
		}
		else if (lab[u][v] == 4) { // obj [\] (backslash)
			switch (dir) {
			case 3: if (u > 0) {
				blow.push(make_pair(1, make_pair(u - 1, v)));
			}break;
			case 4: if (v < m - 1) {
				blow.push(make_pair(2, make_pair(u, v + 1)));
			}break;
			case 1: if (v > 0) {
				blow.push(make_pair(3, make_pair(u, v - 1)));
			}break;
			case 2: if (u < n - 1) {
				blow.push(make_pair(4, make_pair(u + 1, v)));
			}break;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cool[i][j]) {
				answer++;
			}
		}
	}
	cout << answer;
}