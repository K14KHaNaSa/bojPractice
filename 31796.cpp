#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int> s;
	int n, i;
	cin >> n;
	while (n--) {
		cin >> i;
		s.push(i);
	}
	int ans = 1;
	int mx = s.top();
	s.pop();
	while (!s.empty()) {
		if (s.top() * 2 <= mx){
			mx = s.top();
			ans++;
		}
		s.pop();
	}
	cout << ans;
}