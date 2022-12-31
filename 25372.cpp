#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char ipt;
	cin >> n;
	ipt = cin.get();
	for (int i = 0; i < n; i++) {
		int length = 0;
		ipt = cin.get();
		while (ipt != '\n') {
			length++;
			ipt = cin.get();
		}
		if (length > 5 && length < 10) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}