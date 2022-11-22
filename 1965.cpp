#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, bx, smallbox;
	cin >> n;
	vector<int> box(1001);
	int maxbxsize = 0;
	for (int i = 0; i < n; i++) {
		cin >> bx;
		maxbxsize = max(maxbxsize, bx);
		smallbox = 0;
		for (int j = 1; j < bx; j++) {
			smallbox = max(smallbox, box[j]);
		}
		box[bx] = max(box[bx],smallbox + 1);
	}
	int answer = 0;
	for (int i = 1; i <= maxbxsize; i++) {
		answer = max(answer, box[i]);
	}
	cout << answer;
}