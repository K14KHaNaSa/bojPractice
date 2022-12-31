#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> uj(9);
	vector<int> sg(9);
	for (int i = 0; i < 9; i++) {
		cin >> uj[i];
	}
	for (int i = 0; i < 9; i++) {
		cin >> sg[i];
	}
	int ujscore = 0;
	int sgscore = 0;
	bool ujgood = false;
	for (int i = 0; i < 9; i++) {
		ujscore += uj[i];
		if (ujscore > sgscore) {
			ujgood = true;
		}
		sgscore += sg[i];
	}
	if (sgscore > ujscore && ujgood) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}