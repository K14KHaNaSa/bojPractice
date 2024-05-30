#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char hey;
	int e = 0;
	hey = cin.get();
	while (hey != 'y') {
		if (hey == 'e')
			e++;
		hey = cin.get();
	}
	cout << 'h';
	while (e--)
		cout << "ee";
	cout << 'y';
}