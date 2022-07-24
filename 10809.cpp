#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	char a, count;
	vector<int> alphabet(26,-1);
	cin.get(a);
	count = 0;
	while (a!='\n') {
		int b = int(a);
		if (alphabet[b - 97] == -1) {
			alphabet[b - 97] = count;
		}
		cin.get(a);
		count++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
}