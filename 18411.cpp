#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a;
	priority_queue<int> score;
	for(int i=0;i<3;i++){
		cin >> a;
		score.push(a);
	}
	int m = score.top();
	score.pop();
	cout << m + score.top();
}