#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char zo;
	cin >> n;
	zo = cin.get();
	int ndx;
	char st[1000];
	while (n--) {
		zo = cin.get();
		ndx = 0;
		while (zo != '\n') {
			st[ndx] = zo;
			ndx++;
			zo = cin.get();
		}
		cout << "Do-it";
		if (st[ndx / 2 - 1] != st[ndx / 2])
			cout << "-Not";
		cout << "\n";
	}
}