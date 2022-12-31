#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	//box P = p
	// left up = lu / left down = ld / right up = ru / right down = rd
	int plux = x1;
	int pluy = y2;
	int pldx = x1;
	int pldy = y1;
	int prux = x2;
	int pruy = y2;
	int prdx = x2;
	int prdy = y1;
	cin >> x1 >> y1 >> x2 >> y2;
	//box Q = q
	int qlux = x1;
	int qluy = y2;
	int qldx = x1;
	int qldy = y1;
	int qrux = x2;
	int qruy = y2;
	int qrdx = x2;
	int qrdy = y1;

	if (qruy < prdy || prdx < qldx || pruy < qrdy || qrdx < pldx) {
		cout << "NULL";
	}
	else if (((prdx == qlux) && (prdy == qluy)) || ((prux == qldx) && (pruy == qldy)) ||
		((qrdx == plux) && (qrdy == pluy)) || ((qrux == pldx) && (qruy == pldy))) {
		cout << "POINT";
	}
	else if ((prdx == qldx) || (pruy == qldy) || (qrdx == plux) || (pldy == qruy)) {
		cout << "LINE";
	}
	else {
		cout << "FACE";
	}
}