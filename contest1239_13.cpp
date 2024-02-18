#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char csia;
	cin >> n;
	int c = 0;
	int s = 0;
	int i = 0;
	int a = 0;
	while (n--) {
		cin >> csia;
		if (csia == 'C')
			c++;
		if (csia == 'S')
			s++;
		if (csia == 'I')
			i++;
		if (csia == 'A')
			a++;
	}
	cin >> csia;
	if (csia == 'C')
		cout << c;
	if (csia == 'S')
		cout << s;
	if (csia == 'I')
		cout << i;
	if (csia == 'A')
		cout << a;
}