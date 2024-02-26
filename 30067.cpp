#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n[10];
	for (int i = 0; i < 10; i++)
		cin >> n[i];
	for (int i = 0; i < 10; i++) {
		int sum = 0;
		for (int j = 0; j < 10; j++) {
			if (i == j) continue;
			sum += n[j];
		}
		if (n[i] == sum) {
			cout << n[i];
			break;
		}
	}
}