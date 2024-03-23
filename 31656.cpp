#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char pre = '\n';
	char s;
	s = cin.get();
	while (s != EOF) {
		if (pre != s) {
			pre = s;
			cout << s;
		}
		s = cin.get();
	}
}