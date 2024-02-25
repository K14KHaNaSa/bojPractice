#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int d[10];
	for (int i = 0; i < n; i++)
		cin >> d[i];
	cout << "YES\n" << d[0] * 111;
}