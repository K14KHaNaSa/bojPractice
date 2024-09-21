#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, x, y, hy, h, hb, s;
	cin >> n >> m >> x >> y;
	cin >> hy >> h;
	vector<int> student;
	for (int i = 1; i < n; i++) {
		cin >> hb >> s;
		if (hb / 1000000 == 2024) {
			int total_score = s + max(0, y - (x - s));
			student.push_back(total_score);
		}
	}
	sort(student.rbegin(), student.rend());
	int rnk = 0;
	int score = x + y + 1;
	bool able = true;
	int minscore = x + y;
	if (student.size() < m)
		minscore = 0;
	else {
		for (int i = 0; i < student.size(); i++) {
			if (student[i] < score) {
				rnk = i + 1;
				score = student[i];
			}
			minscore = max(score - h, 0);
			if (rnk >= m)
				break;
			if (rnk > m && h + minscore < score)
				able = false;
		}
	}
	(able && minscore <= y) ? cout << "YES\n" << minscore : cout << "NO";
}