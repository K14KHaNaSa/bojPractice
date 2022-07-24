#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, chk, chkn;
	vector<int> pnum;
	vector<int> checkn;
	//소수 갯수는 168개
	for (int i = 2; i < 1000; i++) {
		chk = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				chk = 1;
			}
		}
		if (chk == 0) {
			pnum.push_back(i);
		}
	}
	//소수판별기
	/*for (int i = 0; i < 168; i++) {
		cout << pnum[i] << endl;
	}*/
	
	cin >> n;
	int count = 0;
	for (int k = 0; k < n; k++) {
		cin >> chkn;
		checkn.push_back(chkn);
	}

	for (int k = 0; k < n; k++) {
		chk = 0;
		for (int l = 0; l < 168; l++) {
			if (checkn[k] == pnum[l]) {
				chk += 1;
			}
		}
		if (chk == 1) {
			count += 1;
		}
	}
	cout << count;
	
}