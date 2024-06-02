#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void y(void) {
	cout << "YES\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, i;
	vector<int> p(4);
	cin >> t;
	while (t--) {
		for (i = 0; i < 4; i++)
			cin >> p[i];
		sort(p.begin(), p.end());
		if (p[0] == 0 && p[1] == 1 && p[2] == 2 && p[3] == 3) // x = 0
			y();
		else if (p[0] == 0 && p[1] == 1 && p[2] == 4 && p[3] == 5) // y = 0
			y();
		else if (p[0] == 0 && p[1] == 2 && p[2] == 4 && p[3] == 6) // z = 0
			y();
		else if (p[0] == 4 && p[1] == 5 && p[2] == 6 && p[3] == 7) // x = 1
			y();
		else if (p[0] == 2 && p[1] == 3 && p[2] == 6 && p[3] == 7) // y = 1
			y();
		else if (p[0] == 1 && p[1] == 3 && p[2] == 5 && p[3] == 7) // z = 1
			y();
		else
			cout << "NO\n";
	}
}