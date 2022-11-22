#include <iostream>
using namespace std;

void p() {
	cout << "+";
}
void z() {
	cout << "0";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int hi;
	int os[50];
	for (int i = 0; i < 50; i++) {
		cin >> os[i];
	}
	cin >> hi;
	if (hi > os[35]) {
		if (hi > os[15]) {
			cout << "A";
			if (hi > os[5]) {
				p();
			}
			else {
				z();
			}
		}
		else {
			cout << "B";
			if (hi > os[30]) {
				p();
			}
			else {
				z();
			}
		}
	}
	else {
		if (hi > os[48]) {
			cout << "C";
			if (hi > os[45]) {
				p();
			}
			else {
				z();
			}
		}
		else {
			cout << "F";
		}
	}
}