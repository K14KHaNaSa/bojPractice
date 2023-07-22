#include <iostream>
using namespace std;
int c[26];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char abc; // a = 97 / z = 122
	abc = cin.get();
	for (int i = 0; i < 26; i++) {
		c[i] = 0;
	}
	while (abc != '\n') {
		c[int(abc) - 97]++;
		abc = cin.get();
	}
	while (abc == '\n') {
		abc = cin.get();
	}
	int answer = 0;
	while (abc != '\n') {
		if (c[int(abc) - 97] > 0) {
			c[int(abc) - 97]--;
		}
		else {
			answer++;
		}
		abc = cin.get();
	}
	for (int i = 0; i < 26; i++) {
		answer += c[i];
	}
	cout << answer;
}