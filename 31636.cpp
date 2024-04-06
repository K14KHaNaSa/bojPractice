#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s;
	int combo = 0;
	cin >> n;
	bool yn = false;
	s = cin.get(); // \n dummy
	while (n--) {
		s = cin.get();
		if (s == 'o')
			combo++;
		else
			combo = 0;
		if (combo > 2)
			yn = true;
	}
	yn ? cout << "Yes" : cout << "No";
}