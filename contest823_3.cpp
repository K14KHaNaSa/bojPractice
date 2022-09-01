#include <iostream>
#include <vector>
using namespace std;
// 20/100 points
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> d(n + 1);
	vector<int> k(n + 1);
	vector<int> s(n + 1);
	vector<int> h(n + 1);
	int dp = 0;
	int kp = 0;
	int sp = 0;
	int hp = 0;
	int count = 0;
	char c;
	c = cin.get();
	for (int i = 1; i <= n; i++) {
		c = cin.get();
		switch (c) {
		case 'D': d[dp] = i; dp++; break;
		case 'K': k[kp] = i; kp++; break;
		case 'S': s[sp] = i; sp++; break;
		case 'H': h[hp] = i; hp++; break;
		}
	}
	int defj = 0;
	for (int i = 0; i < dp; i++) {
		for (int j = defj; j < kp; j++) {
			if (d[i] < k[j]) {
				for (int l = 0; l < sp; l++) {
					if (k[j] < s[l]) {
						for (int m = 0; m < hp; m++) {
							if (s[l] < h[m]) {
								count += hp - m;
								break;
							}
						}
					}
				}
			}
			else {
				defj++;

			}
		}
	}
	cout << count;
}