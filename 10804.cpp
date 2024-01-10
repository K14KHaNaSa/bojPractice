#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a, b;
	int n[20];
	int t[20];
	for (int i = 0; i < 20; i++)
		n[i] = i + 1;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		for (int j = 0; j <= b - a; j++)
			t[j] = n[a - 1 + j];
		for (int j = 0; j <= b - a; j++)
			n[b - j - 1] = t[j];
	}
	for (int i = 0; i < 20; i++)
		cout << n[i] << " ";
}