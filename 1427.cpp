#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, ncounter;
	vector<int> vct(10);
	//0=48
	n = cin.get();
	ncounter = 0;
	while (n != 10) {
		vct[ncounter] = n - 48;
		ncounter++;
		n = cin.get();
	}
	sort(vct.rbegin(), vct.rend());
	for (int i = 0; i < ncounter; i++) {
		cout << vct[i];
	}
}