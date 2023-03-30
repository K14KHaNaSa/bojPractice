#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string itm;
	double costsum = 0;
	cin >> itm;
	while (itm != "EOI") {
		if (itm == "Paper") {
			costsum += 57.99;
		}
		else if (itm == "Printer") {
			costsum += 120.5;
		}
		else if (itm == "Planners") {
			costsum += 31.25;
		}
		else if (itm == "Binders") {
			costsum += 22.5;
		}
		else if (itm == "Calendar") {
			costsum += 10.95;
		}
		else if (itm == "Notebooks") {
			costsum += 11.2;
		}
		else if (itm == "Ink") {
			costsum += 66.95;
		}
		cin >> itm;
	}
	cout << "$" << fixed << setprecision(2) << costsum;
}