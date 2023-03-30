#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char a, b;
	vector<char> first;
	vector<char> second;
	a = cin.get();
	while (a != '\n') {
		first.push_back(a);
		a = cin.get();
	}
	b = cin.get();
	while (b != '\n') {
		second.push_back(b);
		b = cin.get();
	}
	int fs = first.size();
	int ss = second.size();
	vector<vector<int>> partsize(fs, vector<int>(ss));
	int answer = 0;
	for (int j = 0; j < ss; j++) {
		if (first[0] == second[j]) {
			partsize[0][j] = 1;
			answer = 1;
		}
	}
	for (int i = 1; i < fs; i++) {
		if (first[i] == second[0]) {
			partsize[i][0] = 1;
			answer = max(answer, 1);
		}
		for (int j = 1; j < ss; j++) {
			if (first[i] == second[j]) {
				partsize[i][j] = partsize[i - 1][j - 1] + 1;
				answer = max(answer, partsize[i][j]);
			}
		}
	}
	cout << answer;
}