#include <iostream>
using namespace std;

int map[5][5];
bool result[1000000];
int abcdef[6];

void makenum(int u, int v, int nums) {
	abcdef[nums] = map[u][v];
	if (nums == 5) {
		int inputresult = abcdef[0] * 100000 + abcdef[1] * 10000 + abcdef[2] * 1000
			+ abcdef[3] * 100 + abcdef[4] * 10 + abcdef[5];
		result[inputresult] = true;
	}
	else {
		if (u > 0) {
			makenum(u - 1, v, nums + 1);
		}
		if (u < 4) {
			makenum(u + 1, v, nums + 1);
		}
		if (v > 0) {
			makenum(u, v - 1, nums + 1);
		}
		if (v < 4) {
			makenum(u, v + 1, nums + 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			makenum(i, j, 0);
		}
	}
	int answer = 0;
	for (int i = 0; i < 1000000; i++) {
		if (result[i]) {
			answer++;
		}
	}
	cout << answer;
}