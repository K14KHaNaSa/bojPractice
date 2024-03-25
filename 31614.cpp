#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, m;
	cin >> h >> m;
	cout << h * 60 + m;
}