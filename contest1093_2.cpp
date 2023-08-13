#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<string> color(4);
	for (int i = 0; i < 4; i++) {
		cin >> color[i];
	}
	sort(color.begin(), color.end());
	color.erase(unique(color.begin(), color.end()), color.end());
	for (int i = 0; i < color.size(); i++) {
		for (int j = 0; j < color.size(); j++) {
			cout << color[i] << " " << color[j] << "\n";
		}
	}
}