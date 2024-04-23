#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char g;
	int w = 0;
	int i = 6;
	while (i--) {
		cin >> g;
		if (g == 'W')
			w++;
	}
	if (w > 4)
		cout << "1";
	else if (w > 2)
		cout << "2";
	else if (w > 0)
		cout << "3";
	else
		cout << "-1";
}