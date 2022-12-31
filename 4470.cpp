#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	queue<char> line;
	char txt;
	cin >> n;
	txt = cin.get();
	for (int i = 0; i < n; i++) {
		txt = cin.get();
		while (txt != '\n') {
			line.push(txt);
			txt = cin.get();
		}
		cout << i + 1 << ". ";
		while (!line.empty()) {
			cout << line.front();
			line.pop();
		}
		cout << "\n";
	}
}