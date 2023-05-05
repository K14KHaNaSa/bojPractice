#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char abc;
	deque<int> a;
	deque<int> b;
	deque<int> c;
	abc = cin.get();
	int index = 0;
	while (abc != '\n') {
		if (abc == 'A') {
			a.push_back(index);
		}
		else if (abc == 'B') {
			b.push_back(index);
		}
		else if (abc == 'C') {
			c.push_back(index);
		}
		index++;
		abc = cin.get();
	}
	int answer = 0;
	if (!b.empty()) { // BC -> AB
		if (!c.empty()) {
			while (!b.empty() && !c.empty()) {
				if (b.front() < c.front()) {
					b.pop_front();
					c.pop_front();
					answer++;
				}
				else {
					c.pop_front();
				}
			}
		}
		if (!a.empty() && !b.empty()) {
			while (!a.empty() && !b.empty()) {
				if (a.back() < b.back()) {
					a.pop_back();
					b.pop_back();
					answer++;
				}
				else {
					a.pop_back();
				}
			}
		}
	}
	cout << answer;
}