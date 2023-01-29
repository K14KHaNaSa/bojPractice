#include <iostream>
using namespace std;

bool rokaf[200001] = { false, };
//false = not in (0) , true = now in (1)
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n;
	int error = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (b == 0) {
			if (!rokaf[a]) {
				error++;
			}
			rokaf[a] = false;
		}
		else if (b == 1) {
			if (rokaf[a]) {
				error++;
			}
			rokaf[a] = true;
		}
	}
	for (int i = 1; i <= 200000; i++) {
		if (rokaf[i]) {
			error++;
		}
	}
	cout << error;
}