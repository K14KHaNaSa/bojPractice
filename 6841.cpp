#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string txt;
	while (1) {
		cin >> txt;
		if (txt == "CU")
			cout << "see you\n";
		else if (txt == ":-)")
			cout << "I¡¯m happy\n";
		else if (txt == ":-(")
			cout << "I¡¯m unhappy\n";
		else if (txt == ";-)")
			cout << "wink\n";
		else if (txt == ":-P")
			cout << "stick out my tongue\n";
		else if (txt == "(~.~)")
			cout << "sleepy\n";
		else if (txt == "TA")
			cout << "totally awesome\n";
		else if (txt == "CCC")
			cout << "Canadian Computing Competition\n";
		else if (txt == "CUZ")
			cout << "because\n";
		else if (txt == "TY")
			cout << "thank-you\n";
		else if (txt == "YW")
			cout << "you¡¯re welcome\n";
		else if (txt == "TTYL") {
			cout << "talk to you later";
			return 0;
		}
		else
			cout << txt << "\n";
	}
}