#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c;
	char s[55];
	c = cin.get();
	int s_len = 0;
	while (c != EOF) {
		s[s_len] = c;
		s_len++;
		c = cin.get();
		if (c == '\n')
			break;
	}
	if (s_len < 3)
		cout << "CE";
	else if (s[0] != '\"' || s[s_len - 1] != '\"')
		cout << "CE";
	else {
		for (int i = 1; i < s_len - 1; i++)
			cout << s[i];
	}
}