#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	queue<int> docnum;
	queue<int> imp;
	int tc, n, m, impnum, toptest, topbool, testbool, qlength, count;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> impnum;
			imp.push(impnum);
			docnum.push(j);
		}
		count = 1;
		testbool = 0;
		while (testbool < 1) {
			qlength = docnum.size();
			topbool = 0;
			toptest = imp.front();
			for (int k = 0; k < qlength; k++) {
				if (toptest < imp.front()) {
					topbool = 1;
				}
				imp.push(imp.front());
				imp.pop();
			}
			if (topbool == 0) {
				if (docnum.front() == m) {
					cout << count << "\n";
					testbool = 1;
				}
				else {
					imp.pop();
					docnum.pop();
					count++;
				}
			}
			else {
				imp.push(imp.front());
				docnum.push(docnum.front());
				imp.pop();
				docnum.pop();
			}
		}
		while (!docnum.empty()) {
			docnum.pop();
		}
		while (!imp.empty()) {
			imp.pop();
		}
	}
}