#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char n;
	bool d = false;
	bool answer = false;
	n = cin.get();
	while (n != EOF) {
		if (n == 'D' || n == 'd') {
			d = true;
		}
		else if (d && n == '2') {
			answer = true;
		}
		else {
			d = false;
		}
		n = cin.get();
	}
	if (answer) {
		cout << "D2";
	}
	else {
		cout << "unrated";
	}
}