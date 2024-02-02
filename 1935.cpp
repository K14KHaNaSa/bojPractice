#include <iostream>
#include <stack>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char c_in;
	double abc[26];
	double lft, rgt;
	stack<pair<bool, pair<char, double>>> cal; // {type = double / true = +-*/
	stack<pair<bool, pair<char, double>>> cal_temp;
	cin >> n;
	c_in = cin.get(); // \n
	c_in = cin.get();
	while (c_in != '\n') {
		cal.push(make_pair(false, make_pair(c_in, 0)));
		c_in = cin.get();
	}
	for (int i = 0; i < n; i++) {
		cin >> abc[i];
	}
	while (!cal.empty()) {
		char cal_f = cal.top().second.first;
		double cal_d = cal.top().second.second;
		if (cal_f >= 'A' && cal_f <= 'Z')
			cal_temp.push(make_pair(false, make_pair(cal_f, abc[cal_f - 'A'])));
		else
			cal_temp.push(make_pair(true, make_pair(cal_f, 0)));
		cal.pop();
	}
	while (!cal_temp.empty()) {
		if (!cal_temp.top().first)
			cal.push(make_pair(false, make_pair('a', cal_temp.top().second.second)));
		else {
			char o = cal_temp.top().second.first;
			rgt = cal.top().second.second;
			cal.pop();
			lft = cal.top().second.second;
			cal.pop();
			if (o == '+')
				cal.push(make_pair(false, make_pair('a', lft + rgt)));
			else if (o == '-')
				cal.push(make_pair(false, make_pair('a', lft - rgt)));
			else if (o == '*')
				cal.push(make_pair(false, make_pair('a', lft * rgt)));
			else if (o == '/')
				cal.push(make_pair(false, make_pair('a', lft / rgt)));
		}
		cal_temp.pop();
	}
	cout << fixed << setprecision(2) << cal.top().second.second;
}