#include <iostream>
using namespace std;

int n, teachers, blanks;
int map[6][6]; // student = 1 / teacher = 2 / wall = 9 / blank = 0
int wall[3][2];
int tarea[5][2];
int blank[36][2];
int answer = false;

void bt(int blankindex, int walls) {
	if (walls == 3) {
		int testmap[6][6];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				testmap[i][j] = map[i][j];
			}
		}
		for (int i = 0; i < 3; i++) {
			testmap[wall[i][0]][wall[i][1]] = 9;
		}
		int testpass = true;
		for (int i = 0; i < teachers; i++) {
			int u = tarea[i][0];
			int v = tarea[i][1];
			//up
			if (testpass) {
				for (int j = u - 1; j >= 0; j--) {
					if (testmap[j][v] == 9) {
						break;
					}
					else if (testmap[j][v] == 1) {
						testpass = false;
						break;
					}
				}
			}
			//down
			if (testpass) {
				for (int j = u + 1; j < n; j++) {
					if (testmap[j][v] == 9) {
						break;
					}
					else if (testmap[j][v] == 1) {
						testpass = false;
						break;
					}
				}
			}
			//left
			if (testpass) {
				for (int j = v - 1; j >= 0; j--) {
					if (testmap[u][j] == 9) {
						break;
					}
					else if (testmap[u][j] == 1) {
						testpass = false;
						break;
					}
				}
			}
			//right
			if (testpass) {
				for (int j = v + 1; j < n; j++) {
					if (testmap[u][j] == 9) {
						break;
					}
					else if (testmap[u][j] == 1) {
						testpass = false;
						break;
					}
				}
			}
		}
		if (testpass) {
			answer = true;
		}
	}
	else {
		for (int i = blankindex; i < blanks; i++) {
			wall[walls][0] = blank[i][0];
			wall[walls][1] = blank[i][1];
			bt(i + 1, walls + 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	char maptype;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> maptype;
			if (maptype == 'X') {
				map[i][j] = 0;
				blank[blanks][0] = i;
				blank[blanks][1] = j;
				blanks++;
			}
			else if (maptype == 'S') {
				map[i][j] = 1;
			}
			else if (maptype == 'T') {
				map[i][j] = 2;
				tarea[teachers][0] = i;
				tarea[teachers][1] = j;
				teachers++;
			}
		}
	}
	bt(0, 0);
	if (answer) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}