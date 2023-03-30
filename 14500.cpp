#include <iostream>
using namespace std;

int answer = 0;
int paper[500][500];
void row1(int u, int v) {
	answer = max(answer, paper[u][v] + paper[u][v + 1] + paper[u][v + 2] + paper[u][v + 3]);
}
void row2(int u, int v) {
	answer = max(max(answer, max(paper[u][v] + paper[u][v + 1] + paper[u][v + 2] + paper[u + 1][v], paper[u][v] + paper[u][v + 1] + paper[u][v + 2] + paper[u + 1][v + 2]))
		, max(max(paper[u + 1][v] + paper[u + 1][v + 1] + paper[u][v + 1] + paper[u][v + 2], paper[u][v] + paper[u][v + 1] + paper[u + 1][v + 1] + paper[u + 1][v + 2])
			, max(max(paper[u][v] + paper[u][v + 1] + paper[u][v + 2] + paper[u + 1][v + 1], paper[u + 1][v] + paper[u + 1][v + 1] + paper[u + 1][v + 2] + paper[u][v + 1])
				, max(paper[u][v] + paper[u + 1][v] + paper[u + 1][v + 1] + paper[u + 1][v + 2], paper[u + 1][v] + paper[u + 1][v + 1] + paper[u + 1][v + 2] + paper[u][v + 2]))));
}
void row3(int u, int v) {
	answer = max(max(answer, max(paper[u][v] + paper[u + 1][v] + paper[u + 2][v] + paper[u + 2][v + 1], paper[u + 2][v] + paper[u + 2][v + 1] + paper[u + 1][v + 1] + paper[u][v + 1])),
		max(max(paper[u][v] + paper[u + 1][v] + paper[u + 2][v] + paper[u + 1][v + 1], paper[u + 1][v] + paper[u][v + 1] + paper[u + 1][v + 1] + paper[u + 2][v + 1])
			, max(max(paper[u][v] + paper[u + 1][v] + paper[u + 1][v + 1] + paper[u + 2][v + 1], paper[u][v + 1] + paper[u + 1][v + 1] + paper[u + 1][v] + paper[u + 2][v]),
				max(paper[u][v] + paper[u][v + 1] + paper[u + 1][v] + paper[u + 2][v], paper[u][v] + paper[u][v + 1] + paper[u + 1][v + 1] + paper[u + 2][v + 1]))));
}
void row4(int u, int v) {
	answer = max(answer, paper[u][v] + paper[u + 1][v] + paper[u + 2][v] + paper[u + 3][v]);
}
void sq(int u, int v) {
	answer = max(answer, paper[u][v] + paper[u + 1][v] + paper[u][v + 1] + paper[u + 1][v + 1]);
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> paper[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 3; j++) {
			row1(i, j);
		}
		if (i < n - 1) {
			for (int j = 0; j < m - 2; j++) {
				row2(i, j);
				sq(i, j);
			}
			sq(i, m - 2);
		}
		if (i < n - 2) {
			for (int j = 0; j < m - 1; j++) {
				row3(i, j);
			}
		}
		if (i < n - 3) {
			for (int j = 0; j < m; j++) {
				row4(i, j);
			}
		}
	}
	cout << answer;
}