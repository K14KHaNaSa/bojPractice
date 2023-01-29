#include <iostream>
using namespace std;

int bag[1000001] = { 0, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, w, v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> w >> v;
		for (int j = 1000000; j >= w; j--) {
			bag[j] = max(bag[j], bag[j - w] + v);
		}
	}
	unsigned long int answerbag, answervalue, inputbag, inputvalue;
	int answer = 1;
	cin >> answerbag;
	answervalue = bag[answerbag];
	for (int i = 2; i <= m; i++) {
		cin >> inputbag;
		inputvalue = bag[inputbag];
		if (inputvalue * answerbag > answervalue * inputbag) {
			answer = i;
			answerbag = inputbag;
			answervalue = inputvalue;
		}
	}
	cout << answer;
}