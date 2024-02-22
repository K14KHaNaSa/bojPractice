#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s[100];
	cin >> n;
	char a;
	a = cin.get();
	for (int i = 0; i < n; i++) {
		a = cin.get();
		s[i] = a;
	}
	for (int i = 0; i < n / 2; i++) {
		if (s[i] == '?')
			s[i] = s[n - 1 - i];
		if (s[n - 1 - i] == '?')
			s[n - 1 - i] = s[i];
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == '?')
			cout << "a";
		else
			cout << s[i];
	}
}