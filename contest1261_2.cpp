#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool able[100];
	int n, m;
	char ox;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		able[i] = true;
	while (n--) {
		ox = cin.get(); // \n
		for (int i = 0; i < m; i++) {
			ox = cin.get();
			if (ox == 'O')
				able[i] = false;
		}
	}
	for (int i = 0; i < m; i++) {
		if (able[i]) {
			cout << i + 1;
			return 0;
		}
	}
	cout << "ESCAPE FAILED";
}