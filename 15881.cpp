#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char ppap;
	ppap = cin.get();
	int answer = 0;
	int cursor = 0;
	for (int i = 0; i < n; i++) {
		ppap = cin.get();
		if (ppap == 'p') {
			if (cursor == 3) {
				cursor = 0;
				answer++;
			}
			else {
				cursor = 1;
			}
		}
		else if (cursor == 1 && ppap == 'P') {
			cursor = 2;
		}
		else if (cursor == 2 && ppap == 'A') {
			cursor = 3;
		}
		else {
			cursor = 0;
		}
	}
	cout << answer;
}