#include <iostream>
#include <vector>
using namespace std;

int step[100001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int l = 0;
	int r = 0;
	int n;
	int power = 0;
	int st = 0;
	cin >> n;
	l = n;
	while (n != 0) {
		if (n != 0) {
			step[st] = n;
		}
		cin >> n;
		st++;
	}
	vector<vector<vector<int>>> foot(st + 1, vector<vector<int>>(5, vector<int>(5, 10000001)));
	foot[0][l][0] = 2;
	foot[0][0][l] = 2;
	for (int i = 1; i < st; i++) {
		int fpnum = step[i];
		if (fpnum == 1) {
			foot[i][1][0] = min(min(foot[i - 1][1][0] + 1, foot[i - 1][2][0] + 3), min(foot[i - 1][3][0] + 4, foot[i - 1][4][0] + 3));
			foot[i][0][1] = min(min(foot[i - 1][0][1] + 1, foot[i - 1][0][2] + 3), min(foot[i - 1][0][3] + 4, foot[i - 1][0][4] + 3));
			foot[i][1][2] = min(min(foot[i - 1][3][2] + 4, foot[i - 1][0][2] + 2), min(foot[i - 1][4][2] + 3, foot[i - 1][1][2] + 1));
			foot[i][1][3] = min(min(foot[i - 1][2][3] + 3, foot[i - 1][0][3] + 2), min(foot[i - 1][4][3] + 3, foot[i - 1][1][3] + 1));
			foot[i][1][4] = min(min(foot[i - 1][2][4] + 3, foot[i - 1][0][4] + 2), min(foot[i - 1][3][4] + 4, foot[i - 1][1][4] + 1));
			foot[i][2][1] = min(min(foot[i - 1][2][3] + 4, foot[i - 1][2][0] + 2), min(foot[i - 1][2][4] + 3, foot[i - 1][2][1] + 1));
			foot[i][3][1] = min(min(foot[i - 1][3][2] + 3, foot[i - 1][3][0] + 2), min(foot[i - 1][3][4] + 3, foot[i - 1][3][1] + 1));
			foot[i][4][1] = min(min(foot[i - 1][4][2] + 3, foot[i - 1][4][0] + 2), min(foot[i - 1][4][3] + 4, foot[i - 1][4][1] + 1));
		}
		else if (fpnum == 2) {
			foot[i][2][0] = min(min(foot[i - 1][1][0] + 3, foot[i - 1][2][0] + 1), min(foot[i - 1][3][0] + 3, foot[i - 1][4][0] + 4));
			foot[i][0][2] = min(min(foot[i - 1][0][1] + 3, foot[i - 1][0][2] + 1), min(foot[i - 1][0][3] + 3, foot[i - 1][0][4] + 4));
			foot[i][2][1] = min(min(foot[i - 1][3][1] + 3, foot[i - 1][0][1] + 2), min(foot[i - 1][4][1] + 4, foot[i - 1][2][1] + 1));
			foot[i][2][3] = min(min(foot[i - 1][1][3] + 3, foot[i - 1][0][3] + 2), min(foot[i - 1][4][3] + 4, foot[i - 1][2][3] + 1));
			foot[i][2][4] = min(min(foot[i - 1][1][4] + 3, foot[i - 1][0][4] + 2), min(foot[i - 1][3][4] + 3, foot[i - 1][2][4] + 1));
			foot[i][1][2] = min(min(foot[i - 1][1][3] + 3, foot[i - 1][1][0] + 2), min(foot[i - 1][1][4] + 4, foot[i - 1][1][2] + 1));
			foot[i][3][2] = min(min(foot[i - 1][3][1] + 3, foot[i - 1][3][0] + 2), min(foot[i - 1][3][4] + 4, foot[i - 1][3][2] + 1));
			foot[i][4][2] = min(min(foot[i - 1][4][1] + 3, foot[i - 1][4][0] + 2), min(foot[i - 1][4][3] + 3, foot[i - 1][4][2] + 1));
		}
		else if (fpnum == 3) {
			foot[i][3][0] = min(min(foot[i - 1][1][0] + 4, foot[i - 1][2][0] + 3), min(foot[i - 1][3][0] + 1, foot[i - 1][4][0] + 3));
			foot[i][0][3] = min(min(foot[i - 1][0][1] + 4, foot[i - 1][0][2] + 3), min(foot[i - 1][0][3] + 1, foot[i - 1][0][4] + 3));
			foot[i][3][1] = min(min(foot[i - 1][2][1] + 3, foot[i - 1][0][1] + 2), min(foot[i - 1][4][1] + 3, foot[i - 1][3][1] + 1));
			foot[i][3][2] = min(min(foot[i - 1][1][2] + 4, foot[i - 1][0][2] + 2), min(foot[i - 1][4][2] + 3, foot[i - 1][3][2] + 1));
			foot[i][3][4] = min(min(foot[i - 1][1][4] + 4, foot[i - 1][0][4] + 2), min(foot[i - 1][2][4] + 3, foot[i - 1][3][4] + 1));
			foot[i][1][3] = min(min(foot[i - 1][1][2] + 3, foot[i - 1][1][0] + 2), min(foot[i - 1][1][4] + 3, foot[i - 1][1][3] + 1));
			foot[i][2][3] = min(min(foot[i - 1][2][1] + 4, foot[i - 1][2][0] + 2), min(foot[i - 1][2][4] + 3, foot[i - 1][2][3] + 1));
			foot[i][4][3] = min(min(foot[i - 1][4][1] + 4, foot[i - 1][4][0] + 2), min(foot[i - 1][4][2] + 3, foot[i - 1][4][3] + 1));
		}
		else if (fpnum == 4) {
			foot[i][4][0] = min(min(foot[i - 1][1][0] + 3, foot[i - 1][2][0] + 4), min(foot[i - 1][3][0] + 3, foot[i - 1][4][0] + 1));
			foot[i][0][4] = min(min(foot[i - 1][0][1] + 3, foot[i - 1][0][2] + 4), min(foot[i - 1][0][3] + 4, foot[i - 1][0][4] + 1));
			foot[i][4][1] = min(min(foot[i - 1][2][1] + 4, foot[i - 1][0][1] + 2), min(foot[i - 1][3][1] + 3, foot[i - 1][4][1] + 1));
			foot[i][4][2] = min(min(foot[i - 1][1][2] + 3, foot[i - 1][0][2] + 2), min(foot[i - 1][3][2] + 3, foot[i - 1][4][2] + 1));
			foot[i][4][3] = min(min(foot[i - 1][1][3] + 3, foot[i - 1][0][3] + 2), min(foot[i - 1][2][3] + 4, foot[i - 1][4][3] + 1));
			foot[i][1][4] = min(min(foot[i - 1][1][2] + 4, foot[i - 1][1][0] + 2), min(foot[i - 1][1][3] + 3, foot[i - 1][1][4] + 1));
			foot[i][2][4] = min(min(foot[i - 1][2][1] + 3, foot[i - 1][2][0] + 2), min(foot[i - 1][2][3] + 3, foot[i - 1][2][4] + 1));
			foot[i][3][4] = min(min(foot[i - 1][3][1] + 3, foot[i - 1][3][0] + 2), min(foot[i - 1][3][2] + 4, foot[i - 1][3][4] + 1));
		}
	}
	int answer = 10000001;
	if (st > 0) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				answer = min(answer, foot[st - 1][i][j]);
			}
		}
	}
	else {
		answer = 0;
	}
	cout << answer;
}