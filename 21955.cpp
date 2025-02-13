#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string n;
	cin >> n;
	cout << n.substr(0, n.length() / 2) << ' ' << n.substr(n.length() / 2, n.length() / 2);
}