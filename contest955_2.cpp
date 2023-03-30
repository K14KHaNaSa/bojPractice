#include <iostream>
#include <vector>
using namespace std;

int n;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, act, d, s, e;
	cin >> n >> q;
	vector<unsigned long long int> token(n + 1);
	vector<bool> reseted(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> token[i];
	}
	vector<unsigned long long int> tokensum(n + 1);
	tokensum[1] = token[1];
	for (int i = 1; i <= n; i++) {
		tokensum[i] = tokensum[i - 1] + token[i];
	}
	while (q--) {
		cin >> act;
		if (act == 1) {
			cin >> d;
			tokensum[d] = token[d];
			for (int i = d + 1; i <= n; i++) {
				tokensum[i] = tokensum[i - 1] + token[i];
			}
			reseted[d] = true;
		}
		else if (act == 2) {
			cin >> s >> e;
			bool resetexist = false;
			for (int i = e - 1; i >= s; i--) {
				if (reseted[i]) {
					cout << tokensum[e] - tokensum[i] << "\n";
					resetexist = true;
					break;
				}
			}
			if (!resetexist) {
				cout << tokensum[e] - tokensum[s - 1] << "\n";
			}
		}
	}
}