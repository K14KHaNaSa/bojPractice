#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int frst, scnd;
	cin >> frst >> scnd;
	cout << 100 - frst << " " << 100 - scnd << " " << (frst + scnd) - 100 << " "
		<< (100 - frst) * (100 - scnd) << " " << ((100 - frst) * (100 - scnd) / 100) << " " << ((100 - frst) * (100 - scnd) % 100) << "\n"
		<< (frst + scnd) - 100 + ((100 - frst) * (100 - scnd) / 100) << " " << ((100 - frst) * (100 - scnd) % 100);
}