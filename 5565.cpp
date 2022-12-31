#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int total, each;
	cin >> total;
	for (int i = 0; i < 9; i++) {
		cin >> each;
		total -= each;
	}
	cout << total;
}