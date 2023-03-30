#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int answerlong;
char outputs[20];
void anagram(vector<char> str, vector<bool> exist, int depth) {
	if (depth == answerlong) {
		for (int i = 0; i < answerlong; i++) {
			cout << outputs[i];
		}
		cout << "\n";
	}
	else {
		char samebanned = ' ';
		for (int i = 0; i < answerlong; i++) {
			if (!exist[i] && samebanned!=str[i]) {
				samebanned = str[i];
				outputs[depth] = str[i];
				exist[i] = true;
				anagram(str, exist, depth + 1);
				exist[i] = false;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char bsn;
	cin >> n;
	bsn = cin.get();
	while (n--) {
		vector<char> origin;
		char ch;
		ch = cin.get();
		while (ch != '\n') {
			origin.push_back(ch);
			ch = cin.get();
		}
		sort(origin.begin(), origin.end());
		answerlong = origin.size();
		vector<bool> exist(answerlong);
		anagram(origin, exist, 0);
	}
}