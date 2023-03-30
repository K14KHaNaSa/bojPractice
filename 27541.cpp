#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char joi;
	cin >> n;
	vector<char> s(n);
	joi = cin.get();
	for (int i = 0; i < n; i++) {
		joi = cin.get();
		s[i] = joi;
	}
	for (int i = 0; i < n - 1; i++) {
		cout << s[i];
	}
	if (s[n - 1] != 'G') {
		cout << s[n - 1] << "G";
	}
}