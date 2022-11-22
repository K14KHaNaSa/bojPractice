#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	char s;
	char str[1000];
	int l = 0;
	bool finish = false;
	while (!finish) {
		s = cin.get();
		if (s != '\n') {
			str[l] = s;
			l++;
		}
		else {
			finish = true;
		}
	}
	if (l < 5) {
		cout << "not cute";
	}
	else if (str[l - 5] == 'd' && str[l - 4] == 'r' && str[l - 3] == 'i' && str[l - 2] == 'i' && str[l - 1] == 'p') {
		cout << "cute";
	}
	else {
		cout << "not cute";
	}
}