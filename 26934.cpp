#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin >> k;
	if (k % 100 != 0) {
		k = (k / 100) * 100 + 100;
	}
	int answer = (k / 500) + ((k % 500) / 200) + ((k % 500) % 200) / 100;
	cout << answer;
}