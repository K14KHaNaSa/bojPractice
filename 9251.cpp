#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char ch;
	vector<char> first;
	vector<char> second;
	ch = cin.get();
	while (ch != '\n') {
		first.push_back(ch);
		ch = cin.get();
	}
	ch = cin.get();
	while (ch != '\n') {
		second.push_back(ch);
		ch = cin.get();
	}
	int fs = first.size();
	int ss = second.size();
	vector<vector<int>> lcs(fs, vector<int>(ss));
	if (first[0] == second[0]) {
		lcs[0][0] = 1;
	}
	for (int j = 1; j < ss; j++) {
		if (first[0] == second[j]) {
			lcs[0][j]++;
		}
		else {
			lcs[0][j] = lcs[0][j - 1];
		}
	}
	for (int i = 1; i < fs; i++) {
		if (first[i] == second[0]) {
			lcs[i][0] = 1;
		}
		else {
			lcs[i][0] = lcs[i - 1][0];
		}
		for (int j = 1; j < ss; j++) {
			if (first[i] == second[j]) {
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
			}
			else {
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
			}
		}
	}
	cout << lcs[fs - 1][ss - 1];
}