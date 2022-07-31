#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, o, temp;
	deque<int> dqStart;
	deque<int> order;
	deque<int> dqAnswer;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> o;
		order.push_back(o);
		dqStart.push_back(i + 1);
	}
	for (int i = 0; i < n; i++) {
		o = order.back();
		switch (o) {
		case 1: {
			dqAnswer.push_front(dqStart.front());
			break;
		}
		case 2: {
			temp = dqAnswer.front();
			dqAnswer.pop_front();
			dqAnswer.push_front(dqStart.front());
			dqAnswer.push_front(temp);
			break;
		}
		case 3: {
			dqAnswer.push_back(dqStart.front());
			break;
		}
		default: break;
		}
		dqStart.pop_front();
		order.pop_back();
	}
	while (!dqAnswer.empty()) {
		cout << dqAnswer.front() << " ";
		dqAnswer.pop_front();
	}
}