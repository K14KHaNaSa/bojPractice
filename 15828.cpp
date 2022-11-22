#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	queue<int> buf;
	cin >> n;
	int inf = 0;
	while (inf != -1) {
		cin >> inf;
		if (inf == 0) {
			if (!buf.empty()) {
				buf.pop();
			}
		}
		else if (inf == -1) {
			if (buf.empty()) {
				cout << "empty";
			}
			else {
				while (!buf.empty()) {
					cout << buf.front() << " ";
					buf.pop();
				}
			}
		}
		else {
			if (buf.size() < n) {
				buf.push(inf);
			}
		}
	}
}