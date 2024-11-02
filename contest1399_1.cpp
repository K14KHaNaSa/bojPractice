#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<int> ans;
	bool htg = false;
	int n;
	char jh[200000];
	int jk[200000];
	char ia[200000];
	int ik[200000];
	cin >> n;
	char a;
	a = cin.get(); // \n
	for (int i = 0; i < n; i++)
		jh[i] = cin.get();
	a = cin.get(); // \n
	for (int i = 0; i < n; i++)
		jk[i] = cin.get() - '0';
	a = cin.get(); // \n
	for (int i = 0; i < n; i++)
		ia[i] = cin.get();
	a = cin.get(); // \n
	for (int i = 0; i < n; i++)
		ik[i] = cin.get() - '0';
	for (int i = 0; i < n; i++) {
		if (jh[i] == ia[i]) {
			if (jk[i] == ik[i])
				ans.push(jk[i]);
			else {
				htg = true;
				break;
			}
		}
	}
	if (htg)
		cout << "htg!";
	else {
		while (!ans.empty()) {
			cout << ans.front();
			ans.pop();
		}
	}
}