#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	vector<string> tail;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		tail.push_back(s.substr(i, s.length() - i));
	sort(tail.begin(), tail.end());
	for (int i = 0; i < tail.size(); i++)
		cout << tail[i] << '\n';
}