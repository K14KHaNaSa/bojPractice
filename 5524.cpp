#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	queue<int> name;
	char a; // a = 97 // A = 65
	cin >> n;
	a = cin.get();
	while (n--) {
		a = cin.get();
		while (a != '\n') {
			if (int(a) < 96) {
				name.push(int(a) + 32);
			}
			else {
				name.push(int(a));
			}
			a = cin.get();
		}
		while (!name.empty()) {
			cout << char(name.front());
			name.pop();
		}
		cout << "\n";
	}
}