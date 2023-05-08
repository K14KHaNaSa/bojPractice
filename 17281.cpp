#include <iostream>
using namespace std;

int n, answer;
int hit[51][9];
int team[9];
bool teambt[9];

int game(void) {
	bool base[3]; // 1B, 2B, 3B (true = runner in)
	int turn = 0; // start 0th-hitter at 1st inning
	int out = 0; // outcount
	int score = 0;
	for (int i = 0; i < n; i++) { // (i+1) inning
		for (int j = 0; j < 3; j++) {
			base[j] = false; // base runner reset
		}
		out = 0;
		while (out < 3) {
			int hitter = team[turn];
			if (hit[i][hitter] == 4) { // homerun
				for (int j = 0; j < 3; j++) {
					if (base[j]) {
						score++;
						base[j] = false;
					}
				}
				score++;
			}
			else if (hit[i][hitter] == 3) { //run to 3rd base
				for (int j = 0; j < 3; j++) {
					if (base[j]) {
						score++;
						base[j] = false;
					}
				}
				base[2] = true;
			}
			else if (hit[i][hitter] == 2) { //run to 2nd base
				for (int j = 1; j < 3; j++) {
					if (base[j]) {
						score++;
						base[j] = false;
					}
				}
				if (base[0]) {
					base[2] = true;
					base[0] = false;
				}
				base[1] = true;
			}
			else if (hit[i][hitter] == 1) { //run to 1st base
				if (base[2]) {
					score++;
					base[2] = false;
				}
				for (int j = 1; j >= 0; j--) {
					if (base[j]) {
						base[j + 1] = true;
						base[j] = false;
					}
				}
				base[0] = true;
			}
			else { //out
				out++;
			}
			turn++;
			if (turn > 8) {
				turn = 0;
			}
		}
	}
	return score;
}

void bt(int nowmem) {
	if (nowmem == 9) {
		int result;
		//simulation
		result = game();
		answer = max(answer, result);
	}
	else if (nowmem == 3) { // 4th hitter =-> backno.1(0)
		bt(4);
	}
	else {
		for (int i = 1; i < 9; i++) {
			if (!teambt[i]) {
				team[nowmem] = i;
				teambt[i] = true;
				bt(nowmem + 1);
				teambt[i] = false;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> hit[i][j];
		}
	}
	answer = 0;
	teambt[0] = true;
	for (int j = 1; j < 9; j++) {
		teambt[j] = false;
	}
	team[3] = 0;
	bt(0);
	cout << answer;
}