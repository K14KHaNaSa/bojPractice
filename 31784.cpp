#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	char s;
	cin >> n >> k;
	s = cin.get();
	while (n > 1) {
		s = cin.get();
		if (s == 'A')
			cout << s;
		else if (int('Z') - int(s) < k) {
			cout << "A";
			k -= int('Z' - s + 1);
		}
		else {
			cout << s;
		}
		n--;
	}
	s = cin.get();
	cout << char((int(s) - 'A' + k) % 26 + 'A');
}