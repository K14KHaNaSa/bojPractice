#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	
	priority_queue<int> y;
	priority_queue<pair<int, char>> solvename;
	int yi, pi;
	string name;
	for (int i = 0; i < 3; i++) {
		cin >> pi >> yi >> name;
		y.push(100 - (yi % 100));
		char head = name.at(0);
		solvename.push(make_pair(pi, head));
	}
	while (!y.empty()) {
		cout << 100 - y.top();
		y.pop();
	}
	cout << "\n";
	while(!solvename.empty()){
		cout << solvename.top().second;
		solvename.pop();
	}
}