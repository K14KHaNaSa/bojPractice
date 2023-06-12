#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	unsigned long long int lt, wt, le, we;
	cin >> t;
	while (t--) {
		cin >> lt >> wt >> le >> we;
		if (lt * wt > le * we) {
			cout << "TelecomParisTech\n";
		}
		else if (lt * wt < le * we) {
			cout << "Eurecom\n";
		}
		else {
			cout << "Tie\n";
		}
	}
}