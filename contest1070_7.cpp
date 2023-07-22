#include <iostream>
using namespace std;

int ss[1000001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char hs;
	hs = cin.get();
	for (int i = 1; i <= n; i++) {
		hs = cin.get();
		ss[i] = ss[i - 1];
		if (hs == 'S') {
			ss[i]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		int sp = i; //searchpointer
		int jumper = i;
		int coin = 1;
		while (sp <= n && ss[sp] <= i && jumper > 0) {
			jumper = i - ss[sp];
			if (sp + jumper <= n && jumper > 0) {
				coin++;
			}
			sp += jumper;
		}
		cout << coin << " ";
	}
}