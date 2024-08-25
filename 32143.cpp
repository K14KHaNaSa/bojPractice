#include <iostream>
#include <queue>
using namespace std;

priority_queue<long long int> card; // reversed
int n, q;
long long int h, d, x, cardsum;

void battle() {
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

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> h >> n >> q;
	cardsum = 0;
	while (n--) {
		cin >> d;
		cardsum += d;
		card.push(d * -1);
	}
	battle();
	while (q--) {
		cin >> x;
		cardsum += x;
		card.push(x * -1);
		battle();
	}
}