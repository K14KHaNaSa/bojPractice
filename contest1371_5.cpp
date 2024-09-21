#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char s;
	int n, m, d; // 0 == 48
	cin >> n >> m;
	s = cin.get();// \n
	for (int i = 1; i < n; i++) {
		s = cin.get();
		d = int(s) - int('0');
		if (s == '0') 
			cout<< 0;
		else if (10 - d <= m) {
			m -= (10 - d);
			cout << 0;
		}
		else
			cout << s;
	}
	s = cin.get();
	d = s - '0';
	cout << char((d + m) % 10 + '0');
}