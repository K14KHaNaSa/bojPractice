#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> abc(3);
	cin >> abc[0] >> abc[1] >> abc[2];
	sort(abc.begin(), abc.end());
	cout << abc[1];
}