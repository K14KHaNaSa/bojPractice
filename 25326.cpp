#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string stu[1000][3];
	int n, m, ans;
	bool a1, a2, a3;
	string q1, q2, q3;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> stu[i][0] >> stu[i][1] >> stu[i][2];
	while (m--) {
		cin >> q1 >> q2 >> q3;
		ans = 0;
		for (int i = 0; i < n; i++) {
			a1 = false;
			a2 = false;
			a3 = false;
			if (q1 == "-" || stu[i][0] == q1)
				a1 = true;
			if (q2 == "-" || stu[i][1] == q2)
				a2 = true;
			if (q3 == "-" || stu[i][2] == q3)
				a3 = true;
			if ((a1 && a2) && a3)
				ans++;
		}
		cout << ans << '\n';
	}
}