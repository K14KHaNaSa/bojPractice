#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> timez[47];
	int n, t, ci, ti;
	cin >> n >> t;
	vector<int> answertime(t);
	while (n--) {
		cin >> ci >> ti;
		timez[ti].push_back(ci);
	}
	for (int i = t - 1; i >= 0; i--) {
		priority_queue<int> remain;
		sort(timez[i].begin(), timez[i].end());
		for (int j = i; j >= 0; j--) {
			if (!remain.empty() && !timez[i].empty()) {
				if (remain.top() >= timez[i].back()) {
					if (answertime[j] < remain.top()) {
						remain.push(answertime[j]);
						answertime[j] = remain.top();
						remain.pop();
					}
				}
				else if (timez[i].back() > answertime[j]) {
					remain.push(answertime[j]);
					answertime[j] = timez[i].back();
					timez[i].pop_back();
				}
			}
			else if (!timez[i].empty()) {
				if (timez[i].back() > answertime[j]) {
					remain.push(answertime[j]);
					answertime[j] = timez[i].back();
					timez[i].pop_back();
				}
			}
		}
	}
	int answer = 0;
	while (t--) {
		answer += answertime[t];
	}
	cout << answer;
}