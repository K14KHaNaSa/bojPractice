#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s;
	int ans = 0;
	cin >> n;
	s = cin.get();
	while (n--) {
		s = cin.get();
		if (s == 'j')
			ans += 2;
		if (s == 'o')
			ans++;
		if (s == 'i')
			ans += 2;
	}
	cout << ans;
}