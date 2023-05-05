#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> card(4, vector<int>(2)); // cardnum / cardtype
	for (int i = 0; i < 4; i++) {
		cin >> card[i][1] >> card[i][0];
	}
	sort(card.begin(), card.end());
	// straight flush (2345) , (1234)
	if (card[0][1] == card[1][1] && card[1][1] == card[2][1] && card[2][1] == card[3][1] &&
		card[0][0] + 1 == card[1][0] && card[1][0] + 1 == card[2][0] && card[2][0] + 1 == card[3][0]) {
		if (card[0][0] > 1) {
			cout << card[0][1] << " " << card[0][0] - 1;
		}
		else {
			cout << card[0][1] << " " << card[3][0] + 1;
		}
	}
	// straight flush (1345)
	else if (card[0][1] == card[1][1] && card[1][1] == card[2][1] && card[2][1] == card[3][1] &&
		card[0][0] + 2 == card[1][0] && card[1][0] + 1 == card[2][0] && card[2][0] + 1 == card[3][0]) {
		cout << card[0][1] << " " << card[0][0] + 1;
	}
	// straight flush (1245)
	else if (card[0][1] == card[1][1] && card[1][1] == card[2][1] && card[2][1] == card[3][1] &&
		card[0][0] + 1 == card[1][0] && card[1][0] + 2 == card[2][0] && card[2][0] + 1 == card[3][0]) {
		cout << card[0][1] << " " << card[1][0] + 1;
	}
	// straight flush (1235)
	else if (card[0][1] == card[1][1] && card[1][1] == card[2][1] && card[2][1] == card[3][1] &&
		card[0][0] + 1 == card[1][0] && card[1][0] + 1 == card[2][0] && card[2][0] + 2 == card[3][0]) {
		cout << card[0][1] << " " << card[2][0] + 1;
	}
	// quadruple
	else if ((card[0][0] == card[1][0] && card[1][0] == card[2][0]) ||
		(card[1][0] == card[2][0] && card[2][0] == card[3][0])) {
		vector<bool> ctype(4);
		//already quadruple
		if (card[0][0] == card[3][0]) {
			if (card[0][0] > 5) {
				cout << "0 " << card[0][0] - 1;
			}
			else {
				cout << "0 " << card[0][0] + 1;
			}
		}
		else {
			// group 012
			if (card[0][0] == card[1][0]) {
				for (int i = 0; i < 3; i++) {
					ctype[card[i][1]] = true;
				}
			}
			// group 123
			else {
				for (int i = 1; i < 4; i++) {
					ctype[card[i][1]] = true;
				}
			}
			// print card type not found
			for (int i = 0; i < 4; i++) {
				if (!ctype[i]) {
					cout << i;
					break;
				}
			}
			cout << " " << card[1][0];
		}
	}
	// full house
	else if (card[0][0] == card[1][0] && card[2][0] == card[3][0]) {
		vector<bool> ctype(4);
		ctype[card[2][1]] = true;
		ctype[card[3][1]] = true;
		for (int i = 0; i < 4; i++) {
			if (!ctype[i]) {
				cout << i;
				break;
			}
		}
		cout << " " << card[3][0];
	}
	// flush
	else if (card[0][1] == card[1][1] && card[1][1] == card[2][1] && card[2][1] == card[3][1]) {
		vector<bool> cnum(14);
		for (int i = 0; i < 4; i++) {
			cnum[card[i][0]] = true;
		}
		cout << card[0][1] << " ";
		for (int i = 1; i < 14; i++) {
			if (!cnum[i]) {
				cout << i;
				break;
			}
		}
	}
	// straight (1234) , (2345)
	else if (card[0][0] + 1 == card[1][0] && card[1][0] + 1 == card[2][0] && card[2][0] + 1 == card[3][0]) {
		if (card[0][0] > 5) {
			cout << "0 " << card[0][0] - 1;
		}
		else {
			cout << "0 " << card[3][0] + 1;
		}
	}

	// straight (1345)
	else if (card[0][0] + 2 == card[1][0] && card[1][0] + 1 == card[2][0] && card[2][0] + 1 == card[3][0]) {
		cout << card[0][1] << " " << card[0][0] + 1;
	}
	// straight (1245)
	else if (card[0][0] + 1 == card[1][0] && card[1][0] + 2 == card[2][0] && card[2][0] + 1 == card[3][0]) {
		cout << card[0][1] << " " << card[1][0] + 1;
	}
	// straight (1235)
	else if (card[0][0] + 1 == card[1][0] && card[1][0] + 1 == card[2][0] && card[2][0] + 2 == card[3][0]) {
		cout << card[0][1] << " " << card[2][0] + 1;
	}
	// triple
	else if (card[0][0] == card[1][0] || card[1][0] == card[2][0] || card[2][0] == card[3][0]) {
		vector<bool> ctype(4);
		if (card[0][0] == card[1][0]) {
			ctype[card[0][1]] = true;
			ctype[card[1][1]] = true;
			for (int i = 0; i < 4; i++) {
				if (!ctype[i]) {
					cout << i;
					break;
				}
			}
			cout << " " << card[0][0];
		}
		else if (card[1][0] == card[2][0]) {
			ctype[card[1][1]] = true;
			ctype[card[2][1]] = true;
			for (int i = 0; i < 4; i++) {
				if (!ctype[i]) {
					cout << i;
					break;
				}
			}
			cout << " " << card[1][0];
		}
		else if (card[2][0] == card[3][0]) {
			ctype[card[2][1]] = true;
			ctype[card[3][1]] = true;
			for (int i = 0; i < 4; i++) {
				if (!ctype[i]) {
					cout << i;
					break;
				}
			}
			cout << " " << card[2][0];
		}
	}
	// two pair no case?
	// pair
	else {
		vector<bool> ctype(4);
		ctype[card[3][1]] = true;
		for (int i = 0; i < 4; i++) {
			if (!ctype[i]) {
				cout << i;
				break;
			}
		}
		cout << " " << card[3][0];
	}
}