#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char vote;
	int a = 0;
	int b = 0;
	int v;
	cin >> v;
	vote = cin.get();
	for (int i = 0; i < v; i++) {
		vote = cin.get();
		if (vote == 'A') {
			a++;
		}
		if (vote == 'B') {
			b++;
		}
	}
	if (a > b) {
		cout << "A";
	}
	else if (a < b) {
		cout << "B";
	}
	else {
		cout << "Tie";
	}
}