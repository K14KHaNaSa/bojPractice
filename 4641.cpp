#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int firstnum, others;
	cin >> firstnum;
	while (firstnum != -1) {
		int dbs = 0;
		vector<int> listnums(15);
		int listindex = 1;
		listnums[0] = firstnum;
		cin >> others;
		while (others != 0) {
			listnums[listindex] = others;
			listindex++;
			cin >> others;
		}
		for (int i = 0; i < listindex; i++) {
			for (int j = 0; j < listindex; j++) {
				if (i != j) {
					if (listnums[i] / listnums[j] == 2 && listnums[i] % listnums[j] == 0) {
						dbs++;
					}
				}
			}
		}
		cout << dbs << "\n";
		cin >> firstnum;
	}
}