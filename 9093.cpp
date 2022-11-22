#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n;
	char w;
	stack<char> t;
	cin >> n;
	w = cin.get();
	for (int i = 0; i < n; i++) {
		w = cin.get();
		while (w != '\n') {
			if (w == ' ') {
				while (!t.empty()) {
					cout << t.top();
					t.pop();
				}
				cout << " ";
			}
			else {
				t.push(w);
			}
			w = cin.get();
		}
		while (!t.empty()) {
			cout << t.top();
			t.pop();
		}
		cout << "\n";
	}
}