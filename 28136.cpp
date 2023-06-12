#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, front, first;
	cin >> n;
	cin >> front;
	first = front;
	int answer = 0;
	n--;
	while (n--) {
		cin >> a;
		if (a <= front) {
			answer++;
		}
		front = a;
	}
	if (first <= front) {
		answer++;
	}
	cout << answer;
}