#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unordered_map<int, int> an;
	int a = 0;
	int n;
	cin >> n;
	an.insert({ 0, 0 });
	for (int i = 1; i <= n; i++) {
		if (a - i < 0)
			a += i;
		else if (an.find(a - i) != an.end())
			a += i;
		else
			a -= i;
		an.insert({ a, a });
	}
	cout << a;
}