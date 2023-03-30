#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char p, s;
	vector<char> fullp;
	queue<char> fulls;
	p = cin.get();
	while (p != ' ') {
		fullp.push_back(p);
		p = cin.get();
	}
	s = cin.get();
	while (s != EOF) {
		fulls.push(s);
		s = cin.get();
	}
	bool pass = false;
	bool fail = false;
	int pointp = 0;
	while (!fulls.empty() && !pass && !fail) {
		if (fullp[pointp] == fulls.front()) {
			pointp++;
			if (pointp == fullp.size()) {
				pass = true;
			}
		}
		else {
			for (int i = pointp + 1; i < fullp.size(); i++) {
				if (fullp[i] == fulls.front()) {
					fail = true;
				}
			}
		}
		fulls.pop();
	}
	if (pass) {
		cout << "PASS";
	}
	else {
		cout << "FAIL";
	}
}