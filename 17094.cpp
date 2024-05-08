#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t, e;
	char s;
	cin >> n;
	s = cin.get();
	t = 0;
	e = 0;
	while (n--) {
		s = cin.get();
		if (s == '2')
			t++;
		if (s == 'e')
			e++;
	}
	t == e ? cout << "yee" : (t > e ? cout << "2" : cout << "e");
}