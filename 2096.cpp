#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector <pair<int, int>> score(4);
	vector <pair<int, int>> temp(4);
	int n, val1, val2, val3;
	cin >> n;
	for (int i = 1; i < 4; i++) {
		cin >> val1;
		score[i].first = val1;
		score[i].second = val1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < 4; j++) {
			temp[j].first = score[j].first;
			temp[j].second = score[j].second;
		}
		cin >> val1;
		score[1].first = val1 + max(temp[1].first, temp[2].first);
		score[1].second = val1 + min(temp[1].second, temp[2].second);

		cin >> val2;
		if (temp[1].first >= max(temp[2].first, temp[3].first)) {
		
			score[2].first = val2 + temp[1].first;
		}
		else if(temp[2].first >= temp[3].first) {
			score[2].first = val2 + temp[2].first;
		}
		else {
			score[2].first = val2 + temp[3].first;
		}
		if (temp[1].second <= min(temp[2].second, temp[3].second)) {
			score[2].second = val2 + temp[1].second;
		}
		else if (temp[2].second <= temp[3].second) {
			score[2].second = val2 + temp[2].second;
		}
		else {
			score[2].second = val2 + temp[3].second;
		}

		cin >> val3;
		score[3].first = val3 + max(temp[2].first, temp[3].first);
		score[3].second = val3 + min(temp[2].second, temp[3].second);
	}

	if (score[1].first > max(score[2].first, score[3].first))
	{
		cout << score[1].first << " ";
	}
	else {
		cout << max(score[2].first, score[3].first) << " ";
	}
	if (score[1].second < min(score[2].second, score[3].second))
	{
		cout << score[1].second;
	}
	else {
		cout << min(score[2].second, score[3].second);
	}
}