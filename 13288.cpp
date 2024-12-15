#include <iostream>
using namespace std;

void trans(char c) {
	if (c == 'a')
		cout << "@";
	if (c == 'b')
		cout << "8";
	if (c == 'c')
		cout << "(";
	if (c == 'd')
		cout << "|)";
	if (c == 'e')
		cout << "3";
	if (c == 'f')
		cout << "#";
	if (c == 'g')
		cout << "6";
	if (c == 'h')
		cout << "[-]";
	if (c == 'i')
		cout << "|";
	if (c == 'j')
		cout << "_|";
	if (c == 'k')
		cout << "|<";
	if (c == 'l')
		cout << "1";
	if (c == 'm')
		cout << "[]\\/[]";
	if (c == 'n')
		cout << "[]\\[]";
	if (c == 'o')
		cout << "0";
	if (c == 'p')
		cout << "|D";
	if (c == 'q')
		cout << "(,)";
	if (c == 'r')
		cout << "|Z";
	if (c == 's')
		cout << "$";
	if (c == 't')
		cout << "\'][\'";
	if (c == 'u')
		cout << "|_|";
	if (c == 'v')
		cout << "\\/";
	if (c == 'w')
		cout << "\\/\\/";
	if (c == 'x')
		cout << "}{";
	if (c == 'y')
		cout << "`/";
	if (c == 'z')
		cout << "2";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c;
	c = cin.get();
	while (c != '\n') {
		if (c >= 'a' && c <= 'z')
			trans(c);
		else if (c >= 'A' && c <= 'Z')
			trans(char(c - 'A' + 'a'));
		else
			cout << c;
		c = cin.get();
		if (c == EOF)
			return 0;
	}
}