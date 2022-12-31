#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char name;
	// a = 97, z = 122
	int five = 0;
	vector<int> head(26);
	cin >> n;
	name = cin.get();
	for (int i = 0; i < n; i++) {
		name = cin.get();
		head[int(name) - 97]++;
		five = max(five, head[int(name) - 97]);
		while (name != '\n') {
			name = cin.get();
		}
	}
	if (five > 4) {
		for (int i = 0; i < 26; i++) {
			if (head[i] > 4) {
				cout << char(i + 97);
			}
		}
	}
	else {
		cout << "PREDAJA";
	}
}