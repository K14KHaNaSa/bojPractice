#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool seat[10][20];
	int n, s;
	char as;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++)
			seat[i][j] = false;
	}
	cin >> n;
	while (n--) {
		as = cin.get();
		as = cin.get();
		cin >> s;
		seat[as - 'A'][s - 1] = true;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++)
			seat[i][j] ? cout << "o" : cout << ".";
		cout << "\n";
	}
}