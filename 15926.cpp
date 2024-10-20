#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, combo, ans;
	char b;
	stack<int> stk; // ( == -2 / ) == -1 // else = combo
	bool closer = false; // )
	cin >> n;
	b = cin.get();
	ans = 0;
	while (n--) {
		b = cin.get();
		if (b == '(')
			stk.push(-2);
		else { // )
			combo = 0;
			closer = true;
			while (!stk.empty()) {
				if (stk.top() > 0) {
					combo += stk.top();
					stk.pop();
				}
				else if (stk.top() == -2) { // (
					combo += 2;
					stk.pop();
					closer = false;
					break;
				}
				else
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
			if (combo > 0)
				stk.push(combo);
			if(closer)
				stk.push(-1); // divider
		}
	}
	cout << ans;
}