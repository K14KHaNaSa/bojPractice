#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, eat;
	vector<pair<unsigned int, unsigned int>> food(100001);
	cin >> n;
	unsigned int maxeat = 0;
	for (int i = 1; i <= n; i++) {
		cin >> eat;
		if (i <= 2) {
			if (i == 1) {
				food[1].first = eat;
				food[1].second = 0;
				maxeat = 0;
			}
			if (i == 2) {
				food[2].first = eat;
				food[2].second = food[1].first + eat / 2;
			}
		}
		else {
			if (food[i - 2].second > maxeat) {
				maxeat = food[i - 2].second;
			}
			food[i].second = food[i - 1].first + eat / 2;

			if (maxeat > food[i - 2].first && maxeat > food[i - 2].second) {
				food[i].first = maxeat + eat;
			}
			else if (food[i - 2].first > food[i - 2].second) {
				food[i].first = food[i - 2].first + eat;
			}
			else {
				food[i].first = food[i - 2].second + eat;
			}
		}
	}
	if (food[n - 1].second > food[n].first && food[n - 1].second > food[n].second) {
		cout << food[n - 1].second;
	}
	else if (food[n].first > food[n].second) {
		cout << food[n].first;
	}
	else {
		cout << food[n].second;
	}
}
//boj #2156 문제와 유사함.