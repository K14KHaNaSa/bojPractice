#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int v, e, a, b, c;
	cin >> v >> e;
	vector<vector<int>> road(v, vector<int>(v, 4000001));
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		road[a-1][b-1] = c;
	}
	for (int k = 0; k < v; k++) {
		for (int i = 0; i < v; i++) {
			for (int j = 0; j < v; j++) {
				road[i][j] = min(road[i][j], road[i][k] + road[k][j]);
			}
		}
	}
	int answer = 4000001;
	for (int i = 0; i < v; i++) {
		answer = min(answer, road[i][i]);
	}
	if (answer > 4000000) {
		cout << -1;
	}
	else {
		cout << answer;
	}
}