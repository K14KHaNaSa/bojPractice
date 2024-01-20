#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, ng, nm, i, g, m;
	cin >> t;
	while (t--) {
		g = 0;
		m = 0;
		cin >> ng >> nm;
		while (ng--) {
			cin >> i;
			g = max(g, i);
		}
		while (nm--) {
			cin >> i;
			m = max(m, i);
		}
		if (g < m)
			cout << "Mecha";
		cout << "Godzilla\n";
	}
}