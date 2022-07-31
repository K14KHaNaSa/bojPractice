#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, inputnum, stktop;
	stack<int> stk;
	queue<char> answer;
	vector<int> appear(1000001, 0);
	bool avail = true;
	cin >> n;
	appear[1] = 1;
	stk.push(1);
	answer.push('+');
	for (int i = 0; i < n; i++) {
		cin >> inputnum;
		if (stk.empty()) {
			//if (i == 0) {
				for (int j = 1; j <= inputnum; j++) {
					if (appear[j] != 1) {
						stk.push(j);
						answer.push('+');
					}
				}
				appear[inputnum] = 1;
				stk.pop();
				answer.push('-');
		}
		else if (inputnum == stk.top()) {
			stk.pop();
			answer.push('-');
			appear[inputnum] = 1;
		}
		else if (inputnum > stk.top()) {
			stktop = stk.top();
			for (int i = stk.top() + 1; i <= inputnum; i++) {
				if (appear[i] != 1) {
					stk.push(i);
					answer.push('+');
				}
			}
			stk.pop();
			appear[inputnum] = 1;
			answer.push('-');

		}
		else if (inputnum < stk.top()) {
			stktop = stk.top();
			for (int j = inputnum; j > stktop; j--) {
				if (appear[j] != 1) {
					stk.pop();
					answer.push('-');
				}
			}
		}
	}
	if (stk.empty()) {
		while (!answer.empty()) {
			cout << answer.front() << "\n";
			answer.pop();
		}
	}
	else {
		cout << "NO";
	}
}