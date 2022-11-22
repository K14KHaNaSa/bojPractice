#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, m, iknow, partyfriend, partymember, hello;
	queue<int> brainfullwork;
	cin >> n >> m;
	vector<vector<bool>> partypeople(n + 1, vector<bool>(n + 1)); //true�� ���� ��������
	vector<bool> truth(n + 1); //true=�˸��� ��� / false=�������ĵ� ��
	vector<int> oneparty(n + 1); //�� ��Ƽ�� ���̴� ����� ����Ʈ
	vector<int> partystatus[50]; //��Ƽ�� ���̴� �����
	cin >> iknow;
	for (int i = 0; i < iknow; i++) {
		cin >> partyfriend;
		truth[partyfriend] = true;
		brainfullwork.push(partyfriend);
	}
	for (int i = 0; i < m; i++) {
		cin >> partymember;
		for (int j = 0; j < partymember; j++) {
			cin >> hello;
			oneparty[j] = hello;
			partystatus[i].push_back(hello);
		}
		for (int j = 0; j < partymember; j++) {
			for (int k = 0; k < partymember; k++) {
				if (j != k) {
					partypeople[oneparty[k]][oneparty[j]] = true;
					partypeople[oneparty[j]][oneparty[k]] = true;
				}
			}
		}
	}
	while (!brainfullwork.empty()) {
		int whoiam = brainfullwork.front();
		brainfullwork.pop();
		for (int i = 1; i <= n; i++) {
			if (whoiam != i) {
				if (partypeople[whoiam][i] == true && truth[i]==false) {
					truth[i] = true;
					brainfullwork.push(i);
				}
			}
		}
	}
	int talkingparty = 0;
	
	for (int i = 0; i < m; i++) {
		int truetalk = false;
		for (int j = 0; j < partystatus[i].size(); j++) {
			if (truth[partystatus[i].at(j)]) {
				truetalk = true;
			}
		}
		if (!truetalk) {
			talkingparty++;
		}
	}
	cout << talkingparty;
}