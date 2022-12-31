#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, homeunivl, challengeunivl;
	string homeunivs, challengeunivs;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> homeunivs >> homeunivl;
		for (int j = 1; j < n; j++) {
			cin >> challengeunivs >> challengeunivl;
			if (challengeunivl > homeunivl) {
				homeunivs = challengeunivs;
				homeunivl = challengeunivl;
			}
		}
		cout << homeunivs << "\n";
	}
}