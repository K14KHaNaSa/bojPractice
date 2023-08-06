#include <iostream>
using namespace std;

bool s[10];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		if (!s[n]) {
			s[n] = true;
		}
		else if (s[n]) {
			s[n] = false;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (s[i]) {
			cout << i;
		}
	}
}