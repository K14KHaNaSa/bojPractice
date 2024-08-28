#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, i;
	i = 0;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		i += (a - b);
		cout << i << '\n';
	}
}