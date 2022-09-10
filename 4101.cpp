#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	while (a + b != 0) {
		if (a > b) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
		cin >> a >> b;
	}
}