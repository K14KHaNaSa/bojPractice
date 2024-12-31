#include <iostream>
using namespace std;

string v[1000];
string r[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s;
	bool used;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n - 1; i++)
		cin >> r[i];
	for (int i = 0; i < n; i++) {
		used = false;
		for (int j = 0; j < n - 1; j++) {
			if (v[i] == r[j]) {
				used = true;
			}
		}
		if (!used) {
			cout << v[i];
			return 0;
		}
	}
}