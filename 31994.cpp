#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string ans, smn;
	int ansnum = 0;
	int n;
	for (int i = 0; i < 7; i++) {
		cin >> smn >> n;
		if (n > ansnum) {
			ansnum = n;
			ans = smn;
		}
	}
	cout << ans;
}