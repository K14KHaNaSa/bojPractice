#include <iostream>
using namespace std;

int r, c, answer = 0;
int board[20][20];
bool alphabet[26] = { false, };// A = 65 / Z = 90

void dfs(int u, int v, int depth) {
	alphabet[board[u][v]] = true;
	if (u > 0) {
		if (!alphabet[board[u - 1][v]]) {
			dfs(u - 1, v, depth + 1);
			alphabet[board[u - 1][v]] = false;
		}
		else {
			answer = max(answer, depth);
		}
	}
	if (u < r - 1) {
		if (!alphabet[board[u + 1][v]]) {
			dfs(u + 1, v, depth + 1);
			alphabet[board[u + 1][v]] = false;
		}
		else {
			answer = max(answer, depth);
		}
	}
	if (v > 0) {
		if (!alphabet[board[u][v - 1]]) {
			dfs(u, v - 1, depth + 1);
			alphabet[board[u][v - 1]] = false;
		}
		else {
			answer = max(answer, depth);
		}
	}
	if (v < c - 1) {
		if (!alphabet[board[u][v + 1]]) {
			dfs(u, v + 1, depth + 1);
			alphabet[board[u][v + 1]] = false;
		}
		else {
			answer = max(answer, depth);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> r >> c;
	char abc;
	for (int i = 0; i < r; i++) {
		abc = cin.get();
		for (int j = 0; j < c; j++) {
			abc = cin.get();
			board[i][j] = int(abc) - 65;
		}
	}
	dfs(0, 0, 1);
	cout << answer;
}