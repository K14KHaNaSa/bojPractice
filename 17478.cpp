#include <iostream>
#include <vector>
using namespace std;

int n;
void recur(int a) {
	for (int i = 0; i < a; i++) {
		cout << "____";
	}
	cout << "\"����Լ��� ������?\"\n";
	if (a < n) {
		for (int i = 0; i < a; i++) {
			cout << "____";
		}
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		for (int i = 0; i < a; i++) {
			cout << "____";
		}
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		for (int i = 0; i < a; i++) {
			cout << "____";
		}
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		recur(a + 1);
	}
	else {
		for (int i = 0; i < a; i++) {
			cout << "____";
		}
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	for (int i = 0; i < a; i++) {
		cout << "____";
	}
	cout << "��� �亯�Ͽ���.\n";
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recur(0);
}