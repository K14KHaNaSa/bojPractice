#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	char s;
	int n;
	cin >> n;
	int sl = 0;
	s = cin.get();
	for (int i = 0; i < n; i++) {
		s = cin.get();
		if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
			sl++;
		}
	}
	cout << sl;
}