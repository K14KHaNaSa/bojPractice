#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	if (s == "(1)")
		cout << 0;
	else if (s == ")1(")
		cout << 2;
	else
		cout << 1;
}