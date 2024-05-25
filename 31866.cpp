#include <iostream>
using namespace std;

char finger(int f) {
	if (f == 0)
		return 'r';
	else if (f == 2)
		return 's';
	else if (f == 5)
		return 'p';
	else
		return 'n';
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int jf, ikf;
	char j, i;
	cin >> jf >> ikf;
	j = finger(jf);
	i = finger(ikf);
	if (j == i)
		cout << '=';
	else if (j != 'n' && i == 'n')
		cout << '>';
	else if (j == 'n' && i != 'n')
		cout << '<';
	else if ((j == 'r' && i == 's') || (j == 's' && i == 'p') || (j == 'p' && i == 'r'))
		cout << '>';
	else
		cout << '<';
}