#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s = "SciComLove";
	cin >> n;
	cout << s.substr(n % 10, 10 - n % 10) << s.substr(0, n % 10);
}