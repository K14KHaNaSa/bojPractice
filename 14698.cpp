#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int t, n, c;
	cin >> t;
	while (t--) {
		cin >> n;
		priority_queue<long long int> slime;
		unsigned long long int answer = 1;
		while (n--) {
			cin >> c;
			slime.push(-1 * c);
		}
		while (slime.size() > 1) {
			long long int a = -1 * slime.top();
			slime.pop();
			long long int b = -1 * slime.top();
			slime.pop();
			answer = (answer * ((a * b) % 1000000007)) % 1000000007;
			slime.push(-1 * (a * b));
		}
		cout << answer << "\n";
	}
}