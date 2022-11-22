#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, s, x, y;
	cin >> n >> k;
	vector<vector<int>> virus(n + 1, vector<int>(n + 1));
	vector<vector<int>> temp(n + 1, vector<int>(n + 1));
	vector<vector<int>> time(n + 1, vector<int>(n + 1));
	queue<pair<int, int>> infection;
	queue<int> infectionlevel;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> virus[i][j];
			if (virus[i][j] != 0) {
				infection.push(pair<int, int>(i, j));
				infectionlevel.push(virus[i][j]);
			}
		}
	}
	cin >> s >> x >> y;
	while (!infection.empty()) {
		while (!infection.empty()) {
			int infx = infection.front().first;
			int infy = infection.front().second;
			int inflevel = infectionlevel.front();
			int inftime = time[infx][infy];
			if (infx > 1 && inftime < s) {
				if (virus[infx - 1][infy] == 0 && (temp[infx - 1][infy] == 0 || temp[infx - 1][infy] > inflevel)) {
					if (temp[infx - 1][infy] == 0) {
						temp[infx - 1][infy] = inflevel;
					}
					else {
						temp[infx - 1][infy] = min(temp[infx - 1][infy], inflevel);
					}
					if (time[infx - 1][infy] == 0) {
						time[infx - 1][infy] = inftime + 1;
					}
					else {
						time[infx - 1][infy] = min(time[infx - 1][infy], inftime + 1);
					}
				}
			}
			if (infy > 1 && inftime < s) {
				if (virus[infx][infy - 1] == 0 && (temp[infx][infy - 1] == 0 || temp[infx][infy - 1] > inflevel)) {
					if (temp[infx][infy - 1] == 0) {
						temp[infx][infy - 1] = inflevel;
					}
					else {
						temp[infx][infy - 1] = min(temp[infx][infy - 1], inflevel);
					}
					if (time[infx][infy - 1] == 0) {
						time[infx][infy - 1] = inftime + 1;
					}
					else {
						time[infx][infy - 1] = min(time[infx][infy - 1], inftime + 1);
					}
				}
			}
			if (infx < n - 1 && inftime < s) {
				if (virus[infx + 1][infy] == 0 && (temp[infx + 1][infy] == 0 || temp[infx + 1][infy] > inflevel)) {
					if (temp[infx + 1][infy] == 0) {
						temp[infx + 1][infy] = inflevel;
					}
					else {
						temp[infx + 1][infy] = min(temp[infx + 1][infy], inflevel);
					}
					if (time[infx + 1][infy] == 0) {
						time[infx + 1][infy] = inftime + 1;
					}
					else {
						time[infx + 1][infy] = min(time[infx + 1][infy], inftime + 1);
					}
				}
			}
			if (infy < n - 1 && inftime < s) {
				if (virus[infx][infy + 1] == 0 && (temp[infx][infy + 1] == 0 || temp[infx][infy + 1] > inflevel)) {
					if (temp[infx][infy + 1] == 0) {
						temp[infx][infy + 1] = inflevel;
					}
					else {
						temp[infx][infy + 1] = min(temp[infx][infy + 1], inflevel);
					}
					if (time[infx][infy + 1] == 0) {
						time[infx][infy + 1] = inftime + 1;
					}
					else {
						time[infx][infy + 1] = min(time[infx][infy + 1], inftime + 1);
					}
				}
			}
			infection.pop();
			infectionlevel.pop();
		}
		for (int virusx = 0; virusx < n; virusx++) {
			for (int virusy = 0; virusy < n; virusy++) {
				if (virus[virusx][virusy] == 0 && temp[virusx][virusy] != 0) {
					virus[virusx][virusy] = temp[virusx][virusy];
					infection.push(pair<int, int>(virusx, virusy));
					infectionlevel.push(virus[virusx][virusy]);
					temp[virusx][virusy] = 0;
				}
			}
		}
	}
	cout << virus[x - 1][y - 1];
}