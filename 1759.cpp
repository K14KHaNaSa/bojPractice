#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int l, c;
int answer[15];
int vowel = 0;
int cons = 0;
// a = 97(0) / e = 101(4) / i = 105(8) / o = 111(14) / u = 117(20)
void bt(vector<int> alphabet, int start, int chars) {
	if (chars == l && vowel > 0 && cons > 1) {
		for (int i = 0; i < l; i++) {
			cout << char(answer[i] + 97);
		}
		cout << "\n";
	}
	else {
		for (int i = start; i < c; i++) {
			answer[chars] = alphabet[i];
			if (alphabet[i] == 0 || alphabet[i] == 4 || alphabet[i] == 8 || alphabet[i] == 14 || alphabet[i] == 20) {
				vowel++;
				bt(alphabet, i + 1, chars + 1);
				vowel--;
			}
			else {
				cons++;
				bt(alphabet, i + 1, chars + 1);
				cons--;
			}
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> l >> c;
	char abc;
	vector<int> alp(c);
	for (int i = 0; i < c; i++) {
		cin >> abc;
		alp[i] = int(abc) - 97;
	}
	sort(alp.begin(), alp.end());
	bt(alp, 0, 0);
}