#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c1, c2;
	int a, b, c;
	cin >> a >> c1 >> b >> c2 >> c;
	(a + b == c) ? cout << "YES" : cout << "NO";
}