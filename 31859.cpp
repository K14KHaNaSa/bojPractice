#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool alp[26];
	for (int i = 0; i < 26; i++)
		alp[i] = false;
	int n;
	char c;
	stack<char> s;
	cin >> n;
	c = cin.get(); // ' '
	int dr = 0;
	while (c != '\n') {
		c = cin.get();
		if (c == '\n')
			break;
		if (!alp[c - 'a']) {
			alp[c - 'a'] = true;
			s.push(c);
		}
		else
			dr++;
	}
	cout << "smupc_";
	dr += 4;
	cout << dr % 10;
	if (dr > 9)
		cout << dr / 10;
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	n += 1906;
	cout << n % 10 << (n % 100) / 10 << (n % 1000) / 100 << n / 1000;
}