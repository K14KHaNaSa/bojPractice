#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string es;
	int n;
	int answer = 0;
	
	while (cin >> es >> n) {
		if (es == "Es") {
			answer += 21 * n;
		}
		else {
			answer += 17 * n;
		}
	}
	cout << answer;
}