#include <iostream>
using namespace std;

bool guard[86400] = { false, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	
	int c, h;
	cin >> c >> h;
	char t; // 0 = 48
	for (int i = 0; i < c + h; i++) {
		t = cin.get();
		int passtime = 0;
		t = cin.get();
		passtime += 36000 * (int(t) - 48);
		t = cin.get();
		passtime += 3600 * (int(t) - 48);
		t = cin.get();
		t = cin.get();
		passtime += 600 * (int(t) - 48);
		t = cin.get();
		passtime += 60 * (int(t) - 48);
		t = cin.get();
		t = cin.get();
		passtime += 10 * (int(t) - 48);
		t = cin.get();
		passtime += (int(t) - 48);
		for (int j = passtime; j < passtime + 40; j++) {
			guard[j] = true;
		}
	}
	int answer = 0;
	for (int i = 0; i < 86400; i++) {
		if (!guard[i]) {
			answer++;
		}
	}
	cout << answer;
}