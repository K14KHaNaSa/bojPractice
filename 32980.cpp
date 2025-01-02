#include <iostream>
using namespace std;

long long int t[7];
long long int cost[7];
long long int b[7];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, i, slen, ans;
	char c;
	cin >> n;
	c = cin.get(); // \n
	for (i = 0; i < 7; i++)
		b[i] = 0;
	while (n--) {
		slen = 0;
		for (i = 0; i < 7; i++)
			t[i] = 0;
		c = cin.get();
		while (c != '\n') {
			slen++;
			if (c == 'P')
				t[0]++;
			if (c == 'C')
				t[1]++;
			if (c == 'V')
				t[2]++;
			if (c == 'S')
				t[3]++;
			if (c == 'G')
				t[4]++;
			if (c == 'F')
				t[5]++;
			if (c == 'O')
				t[6]++;
			c = cin.get();
		}
		if (t[0] == slen)
			b[0] += t[0];
		else if (t[1] == slen)
			b[1] += t[1];
		else if (t[2] == slen)
			b[2] += t[2];
		else if (t[3] == slen)
			b[3] += t[3];
		else if (t[4] == slen)
			b[4] += t[4];
		else if (t[5] == slen)
			b[5] += t[5];
		else
			b[6] += slen;
	}
	for (int i = 0; i < 7; i++)
		cin >> cost[i];
	ans = 0;
	for (int i = 0; i < 7; i++)
		ans += b[i] * min(cost[i], cost[6]);
	cout << ans;
}