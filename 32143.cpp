#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	priority_queue<long long int> card; // reversed
	long long int cardsum = 0;
	long long int h, n, q, d, x;
	cin >> h >> n >> q;
	while (n--) {
		cin >> d;
		cardsum += d;
		card.push(d * -1);
	}
	if (cardsum < h)
		cout << -1 << '\n';
	else {
		while (cardsum + card.top() >= h) {
			cardsum += card.top();
			card.pop();
		}
		cout << card.size() << '\n';
	}
	while (q--) {
		cin >> x;
		cardsum += x;
		card.push(x * -1);
		if (cardsum < h)
			cout << -1 << '\n';
		else {
			while (cardsum + card.top() >= h) {
				cardsum += card.top();
				card.pop();
			}
			cout << card.size() << '\n';
		}
	}
}