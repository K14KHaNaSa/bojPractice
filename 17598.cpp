#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string k;
	int t = 0;
	int l = 0;
	for (int i = 0; i < 9; i++) {
		cin >> k;
		k == "Lion" ? l++ : t++;
	}
	l > t ? cout << "Lion" : cout << "Tiger";
}