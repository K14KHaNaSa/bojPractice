#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, w, v;
	cin >> a >> w >> v;
	((a * v) > w) ? cout << 0 : cout << 1;
}