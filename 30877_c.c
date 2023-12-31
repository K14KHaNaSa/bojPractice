#include <stdio.h>

int main(void) {
	int n, x, t;
	char s = '\n';
	scanf_s("%d", &n);
	scanf_s("%c", &s); // \n dummy
	while (n--) {
		t = 0;
		while (s != ' ') {
			scanf_s("%c", &s);
			if (s == 'X' || s == 'x')
				x = t;
			t++;
		}
		t = 0;
		while (s != '\n') {
			scanf_s("%c", &s);
			if (t == x) {
				if (s >= 'a' && s <= 'z' ? printf("%c", (s + 'A' - 'a')) : printf("%c", s));
			}
			t++;
		}
	}
	return 0;
}