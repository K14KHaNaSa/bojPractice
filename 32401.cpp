#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s[100];
	char c;
	cin >> n;
	c = cin.get(); // \n
	for (int i = 0; i < n; i++)
		s[i] = cin.get();

	int ans = 0;
	bool first_a = false; // not appeared
	int middle_n = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			if (!first_a)
				first_a = true;
			else {
				if (middle_n == 1)
					ans++;
			}
			middle_n = 0;
		}
		if (s[i] == 'N')
			middle_n++;
	}
	cout << ans;
}