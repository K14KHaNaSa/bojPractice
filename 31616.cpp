#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char f;
	char s;
	bool ans = true;
	cin >> n;
	f = cin.get(); // \n dummy
	f = cin.get();
	n--;
	while (n--) {
		s = cin.get();
		if (s != f)
			ans = false;
	}
	ans ? cout << "Yes" : cout << "No";
}