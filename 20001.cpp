#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string rd;
	string o[106];
	int cnt = 0;
	cin >> rd;
	while (rd != "��") {
		o[cnt] = rd;
		cnt++;
		cin >> rd;
	}
	int q = 0;
	for (int i = 3; i < cnt - 2; i++) {
		if (o[i] == "����")
			q++;
		else if (q == 0) // ������ + q==0
			q += 2;
		else
			q--;
	}
	if (q == 0 ? cout << "�������� �����" : cout << "����");
	// start = 3
	// cnt - 3
}