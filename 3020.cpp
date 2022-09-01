#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, h, obj;
	bool minfin = true;
	vector<int> up(500001);
	vector<int> down(500001);
	cin >> n >> h;
	int maxdownobj = 0;
	int maxupobj = h;
	for (int i = 0; i < n; i++) {
		cin >> obj;
		if (i % 2 == 0) {
			down[obj]++;
			maxdownobj = max(maxdownobj, obj);
		}
		else {
			up[h - obj + 1]++;
			maxupobj = max(maxupobj, obj);
		}
	}
	for (int i = maxdownobj - 1; i > 0; i--) {
		down[i] = down[i] + down[i + 1];
	}
	for (int i = maxupobj - h; i < h; i++) {
		up[i + 1] = up[i + 1] + up[i];
	}
	int count = 0;
	int min = 500001;
	for (int i = 1; i <= h; i++) {
		if (up[i] + down[i] == min) {
			count++;
		}
		else if (up[i] + down[i] < min) {
			min = up[i] + down[i];
			count = 1;
		}
	}
	cout << min << " " << count;
}