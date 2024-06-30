#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int s = 0;
	int l = 0;
	int sp = 0;
	bool tw = false;
	char sk;
	cin >> n;
	sk = cin.get();
	while (n--) {
		sk = cin.get();
		if (sk == 'L')
			l++;
		else if (sk == 'R' && !tw) {
			if (l > 0) {
				l--;
				sp++;
			}
			else
				tw = true;
		}
		else if (sk == 'S')
			s++;
		else if (sk == 'K' && !tw) {
			if (s > 0) {
				s--;
				sp++;
			}
			else
				tw = true;
		}
		else if (!tw)
			sp++;
	}
	cout << sp;
}