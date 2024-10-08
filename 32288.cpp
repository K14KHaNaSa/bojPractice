#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s;
	cin >> n;
	s = cin.get();
	while (n--) {
		s = cin.get();
		if (s == 'l')
			cout << 'L';
		if (s == 'I')
			cout << 'i';
	}
}