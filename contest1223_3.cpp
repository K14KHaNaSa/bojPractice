#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	bool p[50001];
	for (int i = 2; i <= 50000; i++)
		p[i] = true;
	for (int i = 2; i <= 50000; i++) {
		if (p[i]) {
			if (n > 0) {
				cout << i << " ";
				n--;
			}
			for (int j = i * 2; j <= 50000; j += i)
				p[j] = false;
		}
	}

}