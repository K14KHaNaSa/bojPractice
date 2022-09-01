#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int b, c, d, price;
	cin >> b >> c >> d;
	vector<int> burger(b);
	vector<int> side(c);
	vector<int> drink(d);
	int maxsum = 0;
	int minsum = 0;
	int set = min(b, c);
	set = min(set, d);
	for (int i = 0; i < b; i++) {
		cin >> price;
		burger[i] = price;
		maxsum += price;
	}
	for (int i = 0; i < c; i++) {
		cin >> price;
		side[i] = price;
		maxsum += price;
	}
	for (int i = 0; i < d; i++) {
		cin >> price;
		drink[i] = price;
		maxsum += price;
	}
	sort(burger.rbegin(), burger.rend());
	sort(side.rbegin(), side.rend());
	sort(drink.rbegin(), drink.rend());
	for (int i = 0; i < set; i++) {
		minsum += burger[i] + side[i] + drink[i];
	}
	minsum = (maxsum - minsum) + (minsum / 10) * 9;
	cout << maxsum << "\n" << minsum;
}