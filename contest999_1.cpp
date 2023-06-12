#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n >> a >> b;
	if (b < a) {
		cout << "Subway";
	}
	else if (b > a) {
		cout << "Bus";
	}
	else {
		cout << "Anything";
	}
}