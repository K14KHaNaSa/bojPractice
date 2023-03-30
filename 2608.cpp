#include <iostream>
using namespace std;

char numone[15];
char numtwo[15];
int answer = 0;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char rnum;
	rnum = cin.get();
	int nonecount = 0;
	while (rnum != '\n') {
		numone[nonecount] = rnum;
		nonecount++;
		rnum = cin.get();
	}
	rnum = cin.get();
	int ntwocount = 0;
	while (rnum != '\n') {
		numtwo[ntwocount] = rnum;
		ntwocount++;
		rnum = cin.get();
	}
	for (int i = 0; i < nonecount; i++) {
		if (numone[i] == 'M') {
			answer += 1000;
		}
		else if (numone[i] == 'D') {
			answer += 500;
		}
		else if (numone[i] == 'C') {
			if (i + 1 < nonecount) {
				if (numone[i + 1] == 'D') {
					answer += 400;
					i++;
				}
				else if (numone[i + 1] == 'M') {
					answer += 900;
					i++;
				}
				else {
					answer += 100;
				}
			}
			else {
				answer += 100;
			}
		}
		else if (numone[i] == 'L') {
			answer += 50;
		}
		else if (numone[i] == 'X') {
			if (i + 1 < nonecount) {
				if (numone[i + 1] == 'L') {
					answer += 40;
					i++;
				}
				else if (numone[i + 1] == 'C') {
					answer += 90;
					i++;
				}
				else {
					answer += 10;
				}
			}
			else {
				answer += 10;
			}
		}
		else if (numone[i] == 'V') {
			answer += 5;
		}
		else if (numone[i] == 'I') {
			if (i + 1 < nonecount) {
				if (numone[i + 1] == 'V') {
					answer += 4;
					i++;
				}
				else if (numone[i + 1] == 'X') {
					answer += 9;
					i++;
				}
				else {
					answer++;
				}
			}
			else {
				answer++;
			}
		}
	}
	for (int i = 0; i < ntwocount; i++) {
		if (numtwo[i] == 'M') {
			answer += 1000;
		}
		else if (numtwo[i] == 'D') {
			answer += 500;
		}
		else if (numtwo[i] == 'C') {
			if (i + 1 < ntwocount) {
				if (numtwo[i + 1] == 'D') {
					answer += 400;
					i++;
				}
				else if (numtwo[i + 1] == 'M') {
					answer += 900;
					i++;
				}
				else {
					answer += 100;
				}
			}
			else {
				answer += 100;
			}
		}
		else if (numtwo[i] == 'L') {
			answer += 50;
		}
		else if (numtwo[i] == 'X') {
			if (i + 1 < ntwocount) {
				if (numtwo[i + 1] == 'L') {
					answer += 40;
					i++;
				}
				else if (numtwo[i + 1] == 'C') {
					answer += 90;
					i++;
				}
				else {
					answer += 10;
				}
			}
			else {
				answer += 10;
			}
		}
		else if (numtwo[i] == 'V') {
			answer += 5;
		}
		else if (numtwo[i] == 'I') {
			if (i + 1 < ntwocount) {
				if (numtwo[i + 1] == 'V') {
					answer += 4;
					i++;
				}
				else if (numtwo[i + 1] == 'X') {
					answer += 9;
					i++;
				}
				else {
					answer++;
				}
			}
			else {
				answer++;
			}
		}
	}
	cout << answer << "\n";
	for (int i = 0; i < answer / 1000; i++) {
		cout << "M";
	}
	answer %= 1000;
	if (answer < 1000 && answer >= 900) {
		cout << "CM";
		answer -= 900;
	}
	else if (answer < 500 && answer >= 400) {
		cout << "CD";
		answer -= 400;
	}
	if (answer >= 500) {
		cout << "D";
		answer -= 500;
	}
	for (int i = 0; i < answer / 100; i++) {
		cout << "C";
	}
	answer %= 100;
	if (answer < 100 && answer >= 90) {
		cout << "XC";
		answer -= 90;
	}
	else if (answer < 50 && answer >= 40) {
		cout << "XL";
		answer -= 40;
	}
	if (answer >= 50) {
		cout << "L";
		answer -= 50;
	}
	for (int i = 0; i < answer / 10; i++) {
		cout << "X";
	}
	answer %= 10;
	if (answer == 9) {
		cout << "IX";
		answer -= 9;
	}
	else if (answer == 4) {
		cout << "IV";
		answer -= 4;
	}
	if (answer >= 5) {
		cout << "V";
		answer -= 5;
	}
	for (int i = 0; i < answer; i++) {
		cout << "I";
	}
}