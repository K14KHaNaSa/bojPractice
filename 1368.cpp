#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int non[300][300];
int umul[300];
bool water[300];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	priority_queue<pair<int, int>> umulmin;
	for (int i = 0; i < n; i++) {
		cin >> umul[i];
		water[i] = false;
		umulmin.push(make_pair(-1 * umul[i], i));
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> non[i][j];
		}
	}
	int answer = 0;
	priority_queue<pair<int, int>> buildwr;
	while(!umulmin.empty()){
		int minnon = -1 * umulmin.top().first;
		int i = umulmin.top().second;
		umulmin.pop();
		if (!water[i]) {
			answer += minnon;
			water[i] = true;
			for (int j = 0; j < n; j++) {
				if (i != j && non[i][j] <= umul[j]) {
					umulmin.push(make_pair(-1 * non[i][j], j));
				}
			}
		}
	}
	cout << answer;
}