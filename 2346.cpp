#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, o, bnum;
	deque<pair<int,int>> balloon;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> o;
		balloon.push_back(make_pair(o, i + 1));
	}

	bnum = balloon.front().first;
	cout << balloon.front().second << " ";
	balloon.pop_front();

	while (!balloon.empty()) {
		if (bnum > 0 && !balloon.empty()) {
			for (int j = 0; j < bnum - 1; j++) {
				balloon.push_back(balloon.front());
				balloon.pop_front();
			}
			bnum = balloon.front().first;
			cout << balloon.front().second << " ";
			balloon.pop_front();
		}
		else if (bnum < 0 && !balloon.empty()) {
			for (int j = 0; j > bnum + 1; j--) {
				balloon.push_front(balloon.back());
				balloon.pop_back();
			}
			bnum = balloon.back().first;
			cout << balloon.back().second << " ";
			balloon.pop_back();
		}
	}	
}