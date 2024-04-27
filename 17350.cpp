#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string nm;
	bool anj = false;
	cin >> n;
	while (n--) {
		cin >> nm;
		if (nm == "anj")
			anj = true;
	}
	cout << "¹¹¾ß" << (anj ? ";" : "?");
}