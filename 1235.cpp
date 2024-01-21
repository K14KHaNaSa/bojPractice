#include <iostream>
using namespace std;

string id[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> id[i];
	int id_len = id[0].size();
	bool avail;
	for (int i = 1; i <= id_len; i++) {
		avail = true;
		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (id[j].substr(id_len - i, i) == id[k].substr(id_len - i, i)) {
					avail = false;
					break;
				}
			}
			if (!avail)
				break;
		}
		if (avail) {
			cout << i;
			break;
		}
	}
}