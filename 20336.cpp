#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, d;
	string m;
	cin >> n;
	while (n > 1) {
		cin >> d;
		while (d--)
			cin >> m;
		n--;
	}
	cin >> d;
	vector<string> meal(d);
	for (int i = 0; i < d; i++)
		cin >> meal[i];
	cout << d << '\n';
	for (int i = 0; i < d; i++)
		cout << meal[i] << '\n';
}