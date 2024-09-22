#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<string> stutime;
	int n;
	string ttime, dtime, st;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cin >> dtime >> st;
		if (st == "student")
			stutime.push_back(dtime);
		else
			ttime = dtime;
	}
	cin >> dtime;
	if (dtime < ttime)
		dtime = ttime;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (stutime[i] >= dtime)
			ans++;
	}
	cout << ans;
}