#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool w_temp[10001];
int dish[10001];
int w_s[100];
vector<int> w_com;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		w_temp[i] = false;
		dish[i] = 1000001;
	}
	for (int i = 0; i < m; i++) {
		cin >> w_s[i];
		w_temp[w_s[i]] = true;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (i != j && w_s[i] + w_s[j] <= n)
				w_temp[w_s[i] + w_s[j]] = true;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (w_temp[i]) {
			w_com.push_back(i);
			dish[i] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (dish[i] < 1000000) {
			for (int j = 0; j < w_com.size(); j++) {
				if (i + w_com[j] <= n) {
					dish[i + w_com[j]] = min(dish[i] + 1, dish[i + w_com[j]]);
				}
			}
		}
	}
	if (dish[n] < 1000000 ? cout << dish[n] : cout << -1);
}