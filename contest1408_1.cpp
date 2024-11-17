#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int score[7] = { 0, 13, 7, 5, 3, 3, 2 };
	int cho, han, k, i;
	cho = 0;
	han = 1;
	for (i = 1; i < 7; i++) {
		cin >> k;
		cho += score[i] * k;
	}
	for (i = 1; i < 7; i++) {
		cin >> k;
		han += score[i] * k;
	}
	cho > han ? cout << "cocjr0208" : cout << "ekwoo";
}