#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, m;
	char image;
	stack<char> boong;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		image = cin.get();
		for (int j = 0; j < m; j++) {
			image = cin.get();
			boong.push(image);
		}
		for (int j = 0; j < m; j++) {
			cout << boong.top();
			boong.pop();
		}
		cout << "\n";
	}
}