#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char bw;
	int obj = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			bw = cin.get();
			if ((i + j) % 2 == 0 && (bw == 'F')) {
				obj++;
			}
		}
		bw = cin.get();
	}
	cout << obj;
}