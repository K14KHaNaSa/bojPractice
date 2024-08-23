#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, hp, mp, atk, df, eq_hp, eq_mp, eq_atk, eq_df;
	cin >> t;
	while (t--) {
		cin >> hp >> mp >> atk >> df >> eq_hp >> eq_mp >> eq_atk >> eq_df;
		cout << max(1, hp + eq_hp) + max(1, mp + eq_mp) * 5 + max(0, atk + eq_atk) * 2 + (df + eq_df) * 2 << '\n';
	}
}