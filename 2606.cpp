#include <iostream>
#include <vector>
using namespace std;

bool infested[101];
vector<int> computer[101];

void virus(int n) {
	infested[n] = true;
	for (int j = 0; j < computer[n].size(); j++) {
		int next = computer[n][j];
		if (!infested[next]) {
			virus(next);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, lnk, fr, to;
	cin >> n >> lnk;
	int infestedcoms = 0;
	for (int i = 0; i < lnk; i++) {
		cin >> fr >> to;
		computer[fr].push_back(to);
		computer[to].push_back(fr);
	}
	virus(1);
	for (int i = 2; i <= n; i++) {
		if (infested[i] == true) {
			infestedcoms++;
		}
	}
	cout << infestedcoms;
}