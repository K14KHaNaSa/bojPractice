#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, e, a, b;
	string name;
	int mach = 1;
	cin >> n;
	while (n > 0) {
		cout << "Machine " << mach << "\n";
		int lv[10];
		for (int i = 0; i < n; i++)
			cin >> lv[i];
		cin >> name >> e;
		while (name != "#") {
			int result = 0;
			while (e--) {
				cin >> a >> b;
				result += lv[a - 1] * b;
			}
			cout << name << " " << result << "\n";
			cin >> name >> e;
		}
		mach++;
		cin >> n;
	}
}