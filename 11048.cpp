#include <iostream>
using namespace std;

int maze[1000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, candy;
	cin >> n >> m >> maze[0];
	for (int j = 1; j < m; j++) {
		cin >> candy;
		maze[j] = maze[j - 1] + candy;
	}
	for (int i = 1; i < n; i++) {
		cin >> candy;
		maze[0] += candy;
		for (int j = 1; j < m; j++) {
			cin >> candy;
			if (maze[j-1] > maze[j]) {
				maze[j] = maze[j-1];
			}
			maze[j] += candy;
		}
	}
	cout << maze[m - 1];
}