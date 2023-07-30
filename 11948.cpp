#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> s(4);
	vector<int> hg(2);
	int answer = 0;
	for (int i = 0; i < 4; i++) {
		cin >> s[i];
		answer += s[i];
	}
	cin >> hg[0] >> hg[1];
	sort(s.begin(), s.end());
	answer -= s[0];
	if (hg[0] > hg[1]) {
		cout << answer + hg[0];
	}
	else {
		cout << answer + hg[1];
	}
}