#include <iostream>
#include <vector>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> mte;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, card, answer, firstmte, secondmte;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> card;
		mte.push(card);
	}
	answer = 0;
	for (int i = 0; i < n - 1; i++) {
		firstmte = mte.top();
		mte.pop();
		secondmte = mte.top();
		mte.pop();
		answer += firstmte + secondmte;
		mte.push(firstmte + secondmte);
	}
	cout << answer << "\n";
	mte.pop();
}