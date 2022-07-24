#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int c, n;
	float score, tot, over;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> n;
		tot = 0;
		over = 0;
		int std[1000];
		for (int j = 0; j < n; j++) {
			cin >> score;
			tot += score;
			std[j] = score;
		}
		for (int j = 0; j < n; j++) {
			if (std[j] > tot / n) {
				over += 1;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << over * 100 / n << "%\n";
	}
}