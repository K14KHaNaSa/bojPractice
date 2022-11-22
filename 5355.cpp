#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int t;
	float num;
	char mk;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		mk = cin.get();
		while (mk != '\n') {
			if (mk == '@') {
				num *= 3;
			}
			if (mk == '%') {
				num += 5;
			}
			if (mk == '#') {
				num -= 7;
			}
			mk = cin.get();
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << num << "\n";
	}
}