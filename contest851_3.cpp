#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, an;
	cin >> n;
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; i++) {
		cin >> an;
		if (an % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	if (odd == even || odd == even + 1) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	
}