#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, vote;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> vote;
		sum += vote;
	}
	if ((n / 2) < sum) {
		cout << "Junhee is cute!";
	}
	else {
		cout << "Junhee is not cute!";
	}
}