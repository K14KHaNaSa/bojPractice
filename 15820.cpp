#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	bool samcase = true;
	bool syscase = true;
	int s1, s2;
	cin >> s1 >> s2;
	long long int answer, my;
	for (int i = 0; i < s1; i++) {
		cin >> answer >> my;
		if (answer != my) {
			samcase = false;
		}
	}
	for (int i = 0; i < s2; i++) {
		cin >> answer >> my;
		if (answer != my) {
			syscase = false;
		}
	}
	if (!samcase) {
		cout << "Wrong Answer";
	}
	else if (!syscase) {
		cout << "Why Wrong!!!";
	}
	else {
		cout << "Accepted";
	}
}