#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char k, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		k = cin.get();
		temp = cin.get();
		while (temp != '\n') {
			k = temp;
			temp = cin.get();
		}
		if (k == '2' || k == '4' || k == '6' || k == '8' || k == '0') {
			cout << "even\n";
		}
		else {
			cout << "odd\n";
		}
	}
}