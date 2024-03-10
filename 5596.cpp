#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int s;
	int mk = 0;
	int ms = 0;
	for (int i = 0; i < 4; i++) {
		cin >> s;
		mk += s;
	}
	for (int i = 0; i < 4; i++) {
		cin >> s;
		ms += s;
	}
	cout << max(mk, ms);
}