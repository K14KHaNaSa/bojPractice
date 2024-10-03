#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, l;
	cin >> n >> l;
	for (int i = 1; i < l; i++)
		cout << 1;
	cout << n;
}