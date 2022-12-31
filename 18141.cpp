#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int a[50];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool yesno = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j && a[i] != a[j]) {
				for (int k = 0; k < n; k++) {
					if (i != k && j != k) {
						if ((a[i] - a[j]) % a[k] != 0) {
							yesno = false;
						}
					}
				}
			}
		}
	}
	if (yesno) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}