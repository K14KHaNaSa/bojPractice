#include <iostream>
#include <vector>
using namespace std;

int n, answer;
int queen[14];

void nqueen(int depth) {
	if (depth == n) {
		answer++;
	}
	else {
		for (int i = 0; i < n; i++) {
			bool godown = true;
			//upside check
			for (int j = 0; j < depth; j++) {
				if (queen[j] == i) {
					godown = false;
					break;
				}
			}
			//leftup check
			if (godown) {
				int d = depth - 1;
				int j = i - 1;
				while (min(d, j) >= 0) {
					if (queen[d] == j) {
						godown = false;
						d = -1;
					}
					else {
						d--;
						j--;
					}
				}
			}
			//rightup check
			if (godown) {
				int d = depth - 1;
				int j = i + 1;
				while (d >= 0 && j < n) {
					if (queen[d] == j) {
						godown = false;
						d = -1;
					}
					else {
						d--;
						j++;
					}
				}
			}
			//godown
			if (godown) {
				queen[depth] = i;
				nqueen(depth + 1);
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	answer = 0;
	nqueen(0);
	cout << answer;
}