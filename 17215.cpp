#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char pin; // 1(49) ~ 9(57) / -(45)
	int prescore; // second chance if not strike
	int bonus = 0;
	bool bonus2 = false; // Strike bonus (remain count)
	bool bonus1 = false;
	bool bonusp = false; // sPair
	int score = 0;
	for (int i = 0; i < 9; i++) {
		pin = cin.get();
		if (pin == 'S') {
			score += 10;
			if (bonus1) {
				score += 10;
				bonus1 = false;
			}
			if (bonus2) {
				score += 10;
				bonus1 = true;
			}
			if (bonusp) {
				score += 10;
				bonusp = false;
			}
			bonus2 = true;
		}
		else if (pin == '-') {
			bonus1 = false;
			bonusp = false;
			if (bonus2) {
				bonus1 = true;
				bonus2 = false;
			}
			pin = cin.get();
			if (pin == 'P') {
				score += 10;
				if (bonus1) {
					score += 10;
					bonus1 = false;
				}
				bonusp = true;
			}
			else if (pin != '-') {
				score += int(pin) - 48;
				if (bonus1) {
					score += int(pin) - 48;
					bonus1 = false;
				}
			}
			else if (bonus1) { // if [-][-]
				bonus1 = false;
			}
		}
		else {
			prescore = int(pin) - 48;
			score += prescore;
			if (bonus1) {
				score += prescore;
				bonus1 = false;
			}
			if (bonus2) {
				score += prescore;
				bonus2 = false;
				bonus1 = true;
			}
			if (bonusp) {
				score += prescore;
				bonusp = false;
			}
			pin = cin.get();
			if (pin == 'P') {
				score += 10 - prescore;
				if (bonus1) {
					score += 10 - prescore;
					bonus1 = false;
				}
				bonusp = true;
			}
			else if (pin != '-') {
				score += int(pin) - 48;
				if (bonus1) {
					score += int(pin) - 48;
					bonus1 = false;
				}
			}
			else if (bonus1) {
				bonus1 = false;
			}
		}
	}
	pin = cin.get(); // 10th frame
	if (pin == 'S') {
		score += 10;
		if (bonus1) {
			score += 10;
			bonus1 = false;
		}
		if (bonus2) {
			score += 10;
			bonus1 = true;
		}
		if (bonusp) {
			score += 10;
		}
		pin = cin.get();
		if (pin == 'S') {
			score += 10;
			if (bonus1) {
				score += 10;
				bonus1 = false;
			}
			pin = cin.get();
			if (pin == 'S') {
				score += 10;
			}
			else if (pin != '-') {
				score += int(pin) - 48;
			}
		}
		else {
			if (pin != '-') {
				prescore = int(pin) - 48;
			}
			else {
				prescore = 0;
			}
			score += prescore;
			if (bonus1) {
				score += prescore;
			}
			pin = cin.get();
			if (pin == 'P') {
				score += 10 - prescore;
			}
			else if (pin != '-') {
				score += (int(pin) - 48);
			}
		}
	}
	else {
		if (pin == '-') {
			prescore = 0;
		}
		else {
			prescore = int(pin) - 48;
		}
		score += prescore;
		if (bonus1) {
			score += prescore;
			bonus1 = false;
		}
		if (bonus2) {
			score += prescore;
			bonus1 = true;
		}
		if (bonusp) {
			score += prescore;
		}
		pin = cin.get();
		if (pin == 'P') {
			score += 10 - prescore;
			if (bonus1) {
				score += 10 - prescore;
			}
			pin = cin.get();
			if (pin == 'S') {
				score += 10;
			}
			else if (pin != '-') {
				score += int(pin) - 48;
			}
		}
		else if (pin != '-') {
			score += int(pin) - 48;
			if (bonus1) {
				score += int(pin) - 48;
			}
		}
	}
	cout << score;
}