#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int m;
	cin >> m;
	while (m != -1) {
		answer += m;
		cin >> m;
	}
	cout << answer;
}