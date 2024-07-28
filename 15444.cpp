#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string l[5][5]; // A B C D E , level 0 ~ 4
	// A
	l[0][0] = "***";
	l[0][1] = "*.*";
	l[0][2] = "***";
	l[0][3] = "*.*";
	l[0][4] = "*.*";
	// B
	l[1][0] = "***";
	l[1][1] = "*.*";
	l[1][2] = "***";
	l[1][3] = "*.*";
	l[1][4] = "***";
	// C
	l[2][0] = "***";
	l[2][1] = "*..";
	l[2][2] = "*..";
	l[2][3] = "*..";
	l[2][4] = "***";
	// D
	l[3][0] = "***";
	l[3][1] = "*.*";
	l[3][2] = "*.*";
	l[3][3] = "*.*";
	l[3][4] = "***";
	// E
	l[4][0] = "***";
	l[4][1] = "*..";
	l[4][2] = "***";
	l[4][3] = "*..";
	l[4][4] = "***";
	int n;
	char a;
	char s[2017];
	cin >> n;
	a = cin.get();
	for (int i = 0; i < n; i++) {
		a = cin.get();
		s[i] = a;
	}
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < n; i++)
			cout << l[int(s[i]-'A')][j];
		cout << '\n';
	}
}