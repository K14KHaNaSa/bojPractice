#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> five(5);
	int sumz = 0;
	for (int i = 0; i < 5; i++) {
		cin >> five[i];
		sumz += five[i];
	}
	sort(five.begin(), five.end());
	cout << sumz / 5 << "\n" << five[2];
}