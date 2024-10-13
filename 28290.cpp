#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	if (s == "fdsajkl;" || s == "jkl;fdsa")
		cout << "in-out";
	else if (s == "asdf;lkj" || s == ";lkjasdf")
		cout << "out-in";
	else if (s == "asdfjkl;")
		cout << "stairs";
	else if (s == ";lkjfdsa")
		cout << "reverse";
	else
		cout << "molu";
}