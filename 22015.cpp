#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> trio(3);
	cin >> trio[0] >> trio[1] >> trio[2];
	sort(trio.begin(), trio.end());
	cout << (trio[2] - trio[1]) + (trio[2] - trio[0]);
}