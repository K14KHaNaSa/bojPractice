#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<int> g_1;
	queue<int> g_2;
	int n, k, a;
	int ans = 0;
	cin >> n >> k;
	int students_inputed = 0;
	while (students_inputed < n) {
		while (g_1.size() + g_2.size() < k && students_inputed < n) {
			cin >> a;
			students_inputed++;
			if (a == 1)
				g_1.push(1);
			if (a == 2)
				g_2.push(2);
		}
		if (g_1.size() > 0 && g_2.size() > 0) {
			g_1.pop();
			g_2.pop();
			ans++;
		}
		else {
			if (g_1.size() > 0)
				g_1.pop();
			else
				g_2.pop();
			ans++;
		}
	}
	while (g_1.size() + g_2.size() > 0) {
		if (g_1.size() > 0 && g_2.size() > 0) {
			g_1.pop();
			g_2.pop();
			ans++;
		}
		else {
			if (g_1.size() > 0)
				g_1.pop();
			else
				g_2.pop();
			ans++;
		}
	}
	cout << ans;
}