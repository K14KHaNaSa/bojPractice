#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, k;
	cin >> a >> k;
	vector<int> caltime(1000001);
	queue<int> atok;
	atok.push(a);
	while (!atok.empty()) {
		int calnum = atok.front();
		int ctime = caltime[calnum];
		if (calnum + 1 <= k) {
			if (calnum + 1 == k) {
				while (!atok.empty()) {
					atok.pop();
				}
				cout << ctime + 1;
				break;
			}
			else if (caltime[calnum + 1] == 0) {
					atok.push(calnum + 1);
					caltime[calnum + 1] = ctime + 1;
				
			}
		}
		if (calnum * 2 <= k) {
			if (calnum * 2 == k) {
				while (!atok.empty()) {
					atok.pop();
				}
				cout << ctime + 1;
				break;
			}
			else if (caltime[calnum * 2] == 0) {
				atok.push(calnum * 2);
				caltime[calnum * 2] = ctime + 1;

			}
		}
		atok.pop();
	}
}