#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ascore[10];
	int a = 0;
	int b = 0;
	int bscore;
	char last = 'D';
	for (int i = 0; i < 10; i++) {
		cin >> ascore[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> bscore;
		if (bscore > ascore[i]) {
			b += 3;
			last = 'B';
		}
		else if (bscore < ascore[i]) {
			a += 3;
			last = 'A';
		}
		else {
			a++; b++;
		}
	}
	cout << a << " " << b << "\n";
	if (a > b) {
		cout << "A";
	}
	else if (a < b) {
		cout << "B";
	}
	else {
		cout << last;
	}
}