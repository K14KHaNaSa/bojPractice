#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	if (t % 10 != 0) {
		cout << -1;
	}
	else {
		cout << t / 300 << " " << (t % 300) / 60 << " " << (t % 60) / 10;
	}
}