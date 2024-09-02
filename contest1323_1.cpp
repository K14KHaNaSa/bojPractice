#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i, tmp;
	char s[100];
	vector<int> p;
	vector<int> c;
	char ch;
	cin >> n;
	ch = cin.get(); // \n
	for (i = 0; i < n; i++) {
		ch = cin.get();
		s[i] = ch;
		if (ch == 'P')
			p.push_back(i);
		if (ch == 'C')
			c.push_back(i);
	}
	for (i = 0; i < min(p.size(), c.size()); i++) {
		s[p[i]] = 'C';
		s[c[i]] = 'P';
	}
	for (i = 0; i < n; i++)
		cout << s[i];
}