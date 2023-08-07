#include <iostream>
#include <stack>
using namespace std;

int stu[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	stack<int> line1;
	stack<int> line2;
	int next = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		line1.push(stu[i]);
	}
	while (!(line1.empty() && line2.empty())) {
		if (!line1.empty()) {
			if (line1.top() == next) {
				line1.pop();
				next++;
			}
			else if (line2.empty()) {
				line2.push(line1.top());
				line1.pop();
			}
			else if (line2.top() == next) {
				line2.pop();
				next++;
			}
			else if (!line1.empty()) {
				line2.push(line1.top());
				line1.pop();
			}
			else {
				cout << "Sad";
				return 0;
			}
		}
		else {
			if (line2.top() == next) {
				line2.pop();
				next++;
			}
			else {
				cout << "Sad";
				return 0;
			}
		}
	}
	cout << "Nice";
	return 0;
}