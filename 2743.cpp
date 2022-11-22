#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char n;
	int length = 0;
	n = cin.get();
	while (n != '\n') {
		length++;
		n = cin.get();
	}
	cout << length;
}