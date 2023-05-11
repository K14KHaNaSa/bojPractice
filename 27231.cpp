#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

priority_queue<unsigned long long int> rightnum;
void bt(int cursor, int nl, vector<int> na, vector<int> on, vector<int> rp) {
	if (cursor < 0) {
		int rn = 0;
		for (int i = 0; i < nl; i++) {
			rn += on[i] * pow(10, rp[i]);
		}
		rightnum.push(rn);
	}
	else {
		rp[cursor] = rp[cursor + 1] + 1;
		bt(cursor - 1, nl, na, on, rp);
		rp[cursor] = 0;
		bt(cursor - 1, nl, na, on, rp);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	cin >> tc;
	char num; // 0 = 48
	while (tc--) {
		num = cin.get();
		vector<int> numappear(10);
		vector<int> originnum(10);
		vector<int> rightpow(10);
		int numlength = 0;
		while (num == '\n') {
			num = cin.get();
		}
		while (num != '\n') {
			numappear[int(num) - 48]++;
			originnum[numlength] = int(num) - 48;
			numlength++;
			num = cin.get();
		}
		if (numappear[0] + numappear[1] != numlength) {
			//right numberz
			rightpow[numlength - 1] = 0;
			bt(numlength - 2, numlength, numappear, originnum, rightpow);
			//left numberz
			priority_queue<unsigned long long int> leftnum;
			unsigned long long int rightmax = rightnum.top();
			unsigned long long int lnum = 0;
			unsigned long long int lpow = 1;
			while (lnum <= rightmax) {
				lnum = 0;
				for (int i = 1; i < 10; i++) {
					lnum += numappear[i] * pow(i, lpow);
				}
				if (lnum <= rightmax) {
					leftnum.push(lnum);
					lpow++;
				}
			}
			int answer = 0;
			while (leftnum.size() > 0 && rightnum.size() > 0) {
				if (leftnum.top() == rightnum.top()) {
					answer++;
					leftnum.pop();
				}
				else if (leftnum.top() < rightnum.top()) {
					rightnum.pop();
				}
				else {
					leftnum.pop();
				}
			}
			cout << answer << "\n";
			if (!leftnum.empty()) {
				while (!leftnum.empty()) {
					leftnum.pop();
				}
			}
			if (!rightnum.empty()) {
				while (!rightnum.empty()) {
					rightnum.pop();
				}
			}
		}
		else {
			cout << "Hello, BOJ 2023!\n";
		}
	}
}