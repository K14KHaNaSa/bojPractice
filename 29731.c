#include <stdio.h>
#include <string.h>

int main(void)
{
	int		n;
	int		slen;
	char	cin;
	char	s[51];
	char	*ans1 = "Never gonna give you up";
	char	*ans2 = "Never gonna let you down";
	char	*ans3 = "Never gonna run around and desert you";
	char	*ans4 = "Never gonna make you cry";
	char	*ans5 = "Never gonna say goodbye";
	char	*ans6 = "Never gonna tell a lie and hurt you";
	char	*ans7 = "Never gonna stop";
	int		fixed = 0;
	scanf_s("%d", &n);
	scanf_s("%c", &cin);
	while (n--)
	{
		for (int i = 0; i < 51; i++) {
			s[i] = '\0';
		}
		slen = 0;
		scanf_s("%c", &cin);
		while (cin != '\n')
		{
			s[slen] = cin;
			slen++;
			scanf_s("%c", &cin);
		}
		s[slen] = '\0';
		if (strcmp(ans1, s) != 0 && strcmp(ans2, s) != 0 &&
			strcmp(ans3, s) != 0 && strcmp(ans4, s) != 0 &&
			strcmp(ans5, s) != 0 && strcmp(ans6, s) != 0 &&
			strcmp(ans7, s) != 0)
			fixed = 1;
	}
	if (fixed > 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}