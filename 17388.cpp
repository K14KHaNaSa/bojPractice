#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int s, k, h;
	cin >> s >> k >> h;
	if (s + k + h < 100) {
		if (s < k && s < h)
			cout << "Soongsil";
		if (k < s && k < h)
			cout << "Korea";
		if (h < s && h < k)
			cout << "Hanyang";
	}
	else
		cout << "OK";
}