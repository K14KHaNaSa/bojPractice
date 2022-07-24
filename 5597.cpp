#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n[35], snum;
	for (int i = 0; i < 28; i++) {
		cin >> snum;
		n[snum-1] = 1;
	}
	for (snum = 0; snum < 30; snum++) {
		if (n[snum] != 1)
			cout << snum+1 << endl;
	}
}