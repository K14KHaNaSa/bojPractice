#include <iostream>
using namespace std;

int map[16][16][4]; // map type, h , slash , v

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char fn;
	char fullname[50];
	int fnlength = 0;
	fn = cin.get();
	fn = cin.get();
	while (fn != '\n') {
		fullname[fnlength] = fn;
		fnlength++;
		fn = cin.get();
	}
	n--;
	while (n--) {
		for (int i = 0; i < fnlength; i++) {
			fn = cin.get();
			if (fullname[i] != fn) {
				fullname[i] = '?';
			}
		}
		fn = cin.get();
	}
	for (int i = 0; i < fnlength; i++) {
		cout << fullname[i];
	}
}