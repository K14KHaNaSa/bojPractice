#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int nation[101];
	priority_queue<pair<int, pair<int, int>>> stud;
	int n, a, b, c;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		stud.push(make_pair(c, make_pair(a, b)));
		nation[a] = 0;
	}
	for (int i = 0; i < 2; i++) {
		a = stud.top().second.first;
		b = stud.top().second.second;
		c = stud.top().first;
		stud.pop();
		cout << a << " " << b << "\n";
		nation[a]++;
	}
	while (nation[stud.top().second.first] > 1)
		stud.pop();
	cout << stud.top().second.first << " " << stud.top().second.second;
}