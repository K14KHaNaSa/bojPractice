#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i;
	string ch;
	int kbs_1, kbs_2;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> ch;
		if (ch == "KBS1")
			kbs_1 = i;
		if (ch == "KBS2")
			kbs_2 = i;
	}
	if (kbs_2 < kbs_1)
		kbs_2++;
	for (i = 0; i < kbs_1; i++)
		cout << 1;
	for (i = 0; i < kbs_1; i++)
		cout << 4;
	for (i = 0; i < kbs_2; i++)
		cout << 1;
	for (i = 1; i < kbs_2; i++)
		cout << 4;
}