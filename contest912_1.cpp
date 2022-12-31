#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char bs;
	int bigdata = 0;
	int security = 0;
	bs = cin.get();
	bs = cin.get();
	while (bs != '\n') {
		if (bs == 's') {
			security++;
		}
		else if (bs == 'b') {
			bigdata++;
		}
		bs = cin.get();
	}
	if (bigdata > security) {
		cout << "bigdata?";
	}
	else if (security > bigdata) {
		cout << "security!";
	}
	else {
		cout << "bigdata? security!";
	}
}