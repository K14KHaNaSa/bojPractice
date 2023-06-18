#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string call;
	cin >> call;
	if (call == "SONGDO") {
		cout << "HIGHSCHOOL";
	}
	else if (call == "CODE") {
		cout << "MASTER";
	}
	else if (call == "2023") {
		cout << "0611";
	}
	else if (call == "ALGORITHM") {
		cout << "CONTEST";
	}
}