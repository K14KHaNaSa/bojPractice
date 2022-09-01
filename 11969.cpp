#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, q, inputs, inpute;
	cin >> n >> q;
	vector<int> holsteins(n + 1);
	vector<int> guernseys(n + 1);
	vector<int> jerseys(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> inputs;
		holsteins[i] = holsteins[i - 1];
		guernseys[i] = guernseys[i - 1];
		jerseys[i] = jerseys[i - 1];
		switch (inputs) {
		case 1: holsteins[i]++; break;
		case 2: guernseys[i]++; break;
		case 3: jerseys[i]++; break;
		}
	}
	for (int i = 0; i < q; i++) {
		cin >> inputs >> inpute;
		cout << holsteins[inpute] - holsteins[inputs - 1] << " " << guernseys[inpute] - guernseys[inputs - 1]
			<< " " << jerseys[inpute] - jerseys[inputs - 1] << "\n";
	}
}