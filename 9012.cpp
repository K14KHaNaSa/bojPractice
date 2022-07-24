#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	stack<char> gh;
	int n, line;
	int count = 0;
	char g;
	cin >> n;
	line = n;
	int firstline = 1;
	while (line > 0) {
		cin.get(g);
		if (g == '(') {
			gh.push(g);
			count++;
		}
		else if (g == ')') {
			if (!gh.empty()) {
				gh.pop();
			}
			count--;
		}
		else if (firstline == 0 && g == '\n') {
			if (gh.empty() && count == 0) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
			while (!gh.empty()) {
				gh.pop();
			}
			count = 0;
			line--;
		}
		firstline = 0;
	}
}