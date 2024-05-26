#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, p, c;
	cin >> a >> p >> c;
	cout << max(a + c, p);
}