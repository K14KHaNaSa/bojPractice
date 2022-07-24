#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, w, l, load, bqsize, dqsize, bqsum, sqfront;
	queue<int> sq;//start
	queue<int> bq;//bridge
	int time = 0;

	cin >> n >> w >> l;
	for (int i = 0; i < n; i++) {
		cin >> load;
		sq.push(load);
	}
	for (int j = 0; j < w; j++) {
		bq.push(0);
	}
	int destination = 0;
	while (destination < n) {
		bqsum = 0;
		if (bq.front() != 0) {
			destination++;
		}
		bq.pop();
		for (int k = 0; k < w - 1; k++) {
			bqsum += bq.front();
			bq.push(bq.front());
			bq.pop();
		}
		if (!sq.empty()) {
			sqfront = sq.front();
		}
		else {
			sqfront = 0;
		}
		if (bqsum + sqfront <= l) {
			if (!sq.empty()) {
				bq.push(sq.front());
				sq.pop();
			}
			else {
				bq.push(0);
			}
		}
		else {
			bq.push(0);
		}
		time++;
	}
	cout << time;

}