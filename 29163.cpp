#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	cin >> n;
	int even = 0;
	int odd = 0;
	while (n--) {
		cin >> a;
		if (a % 2 == 0)
			even++;
		else
			odd++;
	}
	even > odd ? cout << "Happy" : cout << "Sad";
}