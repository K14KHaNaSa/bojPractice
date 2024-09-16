#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, combo, ans;
	char b;
	stack<int> stk; // ( == 0 / ) == -1 // else = combo
	bool closer = false; // )
	cin >> n;
	b = cin.get();
	ans = 0;
	while (n--) {
		b = cin.get();
		if (b == '(')
			stk.push(0);
		else { // )
			if (stk.empty()) {
				stk.push(-1);
			}
			else {
				closer = true;
				combo = 0;
				while (!stk.empty() && closer) {
					if (stk.top() > 0) {
						combo += stk.top();
						stk.pop();
					}
					else if (stk.top() == 0) {
						combo += 2;
						stk.pop();
						closer = false;
					}
					if (!closer || stk.empty())
						break;
					else if (stk.top() == -1)
						break;
				}
				while (!stk.empty()) {
					if (stk.top() > 0) {
						combo += stk.top();
						stk.pop();
					}
					else
						break;
				}
				ans = max(ans, combo);
				stk.push(combo);
				if (closer)
					stk.push(-1);
			}
		}
	}
	cout << ans;
}