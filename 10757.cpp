#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int input;
	int ansmaxlength, shortlength, temp;
	stack<int> a;
	stack<int> b;
	stack<int> answer;
	int alength = 0;
	int blength = 0;
	
	// �����Է� char�� �����Ƿ� int������ �ٲٴ� ���� �Էº��� 48 �� ũ�� �޾����� 48�� ���� �� ���ÿ� push
	input = cin.get();
	while (input != ' ') {
		a.push(int(input) - 48);
		input = cin.get();
	}
	input = cin.get();
	while (input != '\n') {
		b.push(int(input) - 48);
		input = cin.get();
	}

	if (a.size() > b.size()) {
		ansmaxlength = a.size();
		shortlength = b.size();
	}
	else {
		ansmaxlength = b.size();
		shortlength = a.size();
	}
	//���� �ڸ� �� ���� pop�ϸ鼭 ���� ��� ���ÿ� �Է�.
	//�� �ڸ� �� ���� 10�� ������ ���� �ڸ��� �ø� �� �ְ� temp�Լ�
	temp = 0;
	for (int i = 0; i < shortlength; i++) {
		answer.push((a.top() + b.top() + temp) % 10);
		if ((a.top() + b.top() + temp) < 10) {
			temp = 0;
		}
		else {
			temp = 1;
		}
		a.pop();
		b.pop();
	}
	if (a.size() > b.size()) {
		for (int i = shortlength; i < ansmaxlength; i++) {
			answer.push((a.top() + temp) % 10);
			if (a.top() + temp < 10) {
				temp = 0;
			}
			else {
				temp = 1;
			}
			a.pop();
		}
		if (temp == 1) {
			answer.push(1);
		}
	}
	else if (b.size() > a.size()) {
		for (int i = shortlength; i < ansmaxlength; i++) {
			answer.push((b.top() + temp) % 10);
			if (b.top() + temp < 10) {
				temp = 0;
			}
			else {
				temp = 1;
			}
			b.pop();
		}
		if (temp == 1) {
			answer.push(1);
		}
	}
	else if (temp == 1) {
		answer.push(temp);
	}
	//���� ����� �� �պ��� ���� �ڸ� ������ ���
	int anslength = answer.size();
	for (int i = 0; i < anslength; i++) {
		cout << answer.top();
		answer.pop();
	}
}