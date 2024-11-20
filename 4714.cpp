#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double d;
	cin >> d;
	while (d >= 0) {
		cout << fixed << setprecision(2) << "Objects weighing " << d << " on Earth will weigh " << d * 0.167 << " on the moon.\n";
		cin >> d;
	}
}