#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		queue<int> pda;
		int abundantsum = 0;
		bool goodbye = true;
		for (int j = 1; j <= n / 2; j++) {
			if (n % j == 0) {
				pda.push(j);
				abundantsum += j;
			}
		}
		if (abundantsum > n) {
			while (!pda.empty()) {
				int pdanum = pda.front();
				int abpdasum = 0;
				for (int j = 1; j <= pdanum / 2; j++) {
					if (pdanum % j == 0) {
						abpdasum += j;
					}
				}
				if (abpdasum > pdanum) {
					goodbye = false;
					break;
				}
				else {
					pda.pop();
				}
			}
		}
		else {
			goodbye = false;
		}
		if (goodbye) {
			cout << "Good Bye\n";
		}
		else {
			cout << "BOJ 2022\n";
		}
	}
}