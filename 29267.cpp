#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, s;
	string o;
	cin >> n >> k;
	int now = 0;
	s = 0;
	while (n--) {
		cin >> o;
		if (o == "ammo")
			now += k;
		if (o == "save")
			s = now;
		if (o == "shoot")
			now--;
		if (o == "load")
			now = s;
		cout << now << "\n";
	}
}