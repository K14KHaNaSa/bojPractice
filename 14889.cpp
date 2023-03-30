#include <iostream>
using namespace std;

int n, half;
int answer = 2000000000;
int s[20][20];
bool team[20]; // true = start / false = link
int start[10];
int link[10];
void teammaking(int from, int nowmember) {
	if (nowmember == half) {
		int team_s = 0;
		int team_l = 0;
		int linkteamindex = 0;
		for (int i = 0; i < n; i++) {
			if (team[i] == false) {
				link[linkteamindex] = i;
				linkteamindex++;
			}
			if (linkteamindex == half) {
				break;
			}
		}
		for (int i = 0; i < half; i++) {
			for (int j = i + 1; j < half; j++) {
				team_s += s[start[i]][start[j]] + s[start[j]][start[i]];
			}
		}
		for (int i = 0; i < half; i++) {
			for (int j = i + 1; j < half; j++) {
				team_l += s[link[i]][link[j]] + s[link[j]][link[i]];
			}
		}
		answer = min(answer, max(team_s - team_l, team_l - team_s));
	}
	else {
		for (int i = from; i < n; i++) {
			if (team[i] == false) {
				team[i] = true;
				start[nowmember] = i;
				teammaking(i, nowmember + 1);
				team[i] = false;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	half = n / 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> s[i][j];
		}
	}
	teammaking(0, 0);
	cout << answer;
}