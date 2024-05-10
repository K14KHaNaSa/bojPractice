#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> lego;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, n, l;
	while (1) {
		cin >> x;
		if (cin.eof())
			break;
		cin >> n;
		if (n == 0)
			cout << "danger\n";
		else {
			lego.clear();
			for (int i = 0; i < n; i++) {
				cin >> l;
				lego.push_back(l);
			}
			sort(lego.begin(), lego.end());
			int left = 0;
			int right = n - 1;
			x *= 10000000;
			while (left != right) {
				if (lego[left] + lego[right] == x) {
					cout << "yes " << lego[left] << " " << lego[right] << "\n";
					break;
				}
				else if (lego[left] + lego[right] > x)
					right--;
				else
					left++;
			}
			if (left == right)
				cout << "danger\n";
		}
	}
}