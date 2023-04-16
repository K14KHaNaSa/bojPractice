#include <iostream>
using namespace std;

int n, m, x, y;
int map[20][20];
int dice[6];
int temp[6]; // dice temp

void settemp() {
	for (int i = 0; i < 6; i++) {
		temp[i] = dice[i];
	}
}

void ptop() {
	cout << dice[0] << "\n";
}

void flipnum() {
	if (map[x][y] == 0) {
		map[x][y] = dice[5];
	}
	else {
		dice[5] = map[x][y];
		map[x][y] = 0;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, order;
	cin >> n >> m >> x >> y >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	dice[0] = 0; // top
	dice[1] = 0; // back
	dice[2] = 0; // right
	dice[3] = 0; // left
	dice[4] = 0; // front
	dice[5] = 0; // bottom
	while (k--) {
		cin >> order;
		if (order == 1 && y < m - 1) { // east
			settemp();
			dice[0] = temp[3]; // top
			dice[1] = temp[1]; // back
			dice[2] = temp[0]; // right
			dice[3] = temp[5]; // left
			dice[4] = temp[4]; // front
			dice[5] = temp[2]; // bottom
			y++;
			flipnum();
			ptop();
		}
		else if (order == 2 && y > 0) { // west
			settemp();
			dice[0] = temp[2]; // top
			dice[1] = temp[1]; // back
			dice[2] = temp[5]; // right
			dice[3] = temp[0]; // left
			dice[4] = temp[4]; // front
			dice[5] = temp[3]; // bottom
			y--;
			flipnum();
			ptop();
		}
		else if (order == 3 && x > 0) { // north
			settemp();
			dice[0] = temp[4]; // top
			dice[1] = temp[0]; // back
			dice[2] = temp[2]; // right
			dice[3] = temp[3]; // left
			dice[4] = temp[5]; // front
			dice[5] = temp[1]; // bottom
			x--;
			flipnum();
			ptop();
		}
		else if (order == 4 && x < n - 1) { // south
			settemp();
			dice[0] = temp[1]; // top
			dice[1] = temp[5]; // back
			dice[2] = temp[2]; // right
			dice[3] = temp[3]; // left
			dice[4] = temp[0]; // front
			dice[5] = temp[4]; // bottom
			x++;
			flipnum();
			ptop();
		}
	}
}