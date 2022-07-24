#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	char n;
	int ascii, best;
	vector<int> abc(26,0);
	int most = 0;
	int mostcount = 0;
	cin.get(n);
	while (n != '\n' || cin.eof()) {
		ascii = int(n);
		if (ascii > 96) {
			ascii = ascii - 32;
			abc[ascii - 65]++;
		}
		else {
			abc[ascii - 65]++;
		}
		cin.get(n);
	}
	for (int i = 0; i < 26; i++) {
		if (abc[i] > most) {
			most = abc[i];
			best = i;
			mostcount = 1;
		}
		else if (abc[i] == most) {
			mostcount++;
		}
	}
	char answer = char(best + 65);
	if (mostcount > 1) {
		cout << '?' ;
	}
	else {
		cout << answer;
	}
}