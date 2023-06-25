#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	bool findanswer = false;
	int q = 20000;
	char ans;
	while (q--) {
		cout << "? 1" << endl;
		cin >> ans;
		if (ans == 'Y') {
			cout << "! 1";
		}
	}
}