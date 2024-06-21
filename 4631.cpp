#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i, s;
	vector<string> name;
	string nm;
	cin >> n;
	s = 1;
	while (n > 0) {
		name.clear();
		for (i = 0; i < n; i++) {
			cin >> nm;
			name.push_back(nm);
		}
		cout << "SET " << s << '\n';
		for (i = 0; i < n; i += 2)
			cout << name[i] << '\n';
		for (i = (n % 2 == 0 ? n - 1 : n - 2); i >= 0; i -= 2)
			cout << name[i] << '\n';
		cin >> n;
		s++;
	}
}