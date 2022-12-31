#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char n;
	int v = 0;
	n = cin.get();
	while (n != '#') {
		if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
			v++;
		}
		else if (n == '\n') {
			cout << v << "\n";
			v = 0;
		}
		n = cin.get();
	}
}