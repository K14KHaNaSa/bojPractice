#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int ans;
	cout << "? 1" << endl;
	cin >> ans;
	int left = ans;
	cout << "? " << n << endl;
	cin >> ans;
	int right = ans;
	cout << "! " << right - left << flush;
}