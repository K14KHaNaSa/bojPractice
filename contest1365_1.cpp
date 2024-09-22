#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n;
	cin >> n;
	if (n >= -32768 && n < 32768)
		cout << "short";
	else if (n >= -2147483648 && n < 2147483648)
		cout << "int";
	else
		cout << "long long";
}