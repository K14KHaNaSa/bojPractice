#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> bear(3);
	for (int i = 0; i < 3; i++) {
		cin >> bear[i];
	}
	sort(bear.begin(), bear.end());
	cout << bear[1];
}