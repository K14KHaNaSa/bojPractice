#include <iostream>
using namespace std;

int appear[101][3];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int score[200][3];
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j < 3; j++) {
			appear[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> score[i][j];
			appear[score[i][j]][j]++;
		}
	}
	for (int i = 0; i < n; i++) {
		int answer = 0;
		for (int j = 0; j < 3; j++) {
			if (appear[score[i][j]][j] == 1) {
				answer += score[i][j];
			}
		}
		cout << answer << "\n";
	}
}