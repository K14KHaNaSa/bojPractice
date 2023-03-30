#include <iostream>
using namespace std;

int n, m, homes, chickens, answer;
int map[50][50];
int home[100][2];
int chicken[13][2];
int survived[13];

void bt(int startindex, int selection) {
	if (selection == m) {
		int chickenroadsum = 0;
		for (int i = 0; i < homes; i++) {
			int homechicken = 2500001;
			for (int j = 0; j < m; j++) {
				homechicken = min(homechicken, max(chicken[survived[j]][0] - home[i][0], home[i][0] - chicken[survived[j]][0]) + max(chicken[survived[j]][1] - home[i][1], home[i][1] - chicken[survived[j]][1]));
			}
			chickenroadsum += homechicken;
		}
		answer = min(answer, chickenroadsum);
	}
	else {
		for (int i = startindex; i < chickens; i++) {
			survived[selection] = i;
			bt(i + 1, selection + 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	homes = 0;
	chickens = 0;
	answer = 2500001;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				home[homes][0] = i;
				home[homes][1] = j;
				homes++;
			}
			else if (map[i][j] == 2) {
				chicken[chickens][0] = i;
				chicken[chickens][1] = j;
				chickens++;
			}
		}
	}
	bt(0, 0);
	cout << answer;
}