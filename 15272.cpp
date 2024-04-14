#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char s;
	bool pre_s = false;
	bool hiss = false;
	s = cin.get();
	while (s != '\n') {
		if (s == 's') {
			if (pre_s)
				hiss = true;
			else
				pre_s = true;
		}
		else
			pre_s = false;
		s = cin.get();
	}
	hiss ? cout << "hiss" : cout << "no hiss";
}