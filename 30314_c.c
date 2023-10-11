#include <stdio.h>
#include <stdlib.h>
//fix scanf_s to scanf if submit code
int main(void) {
    int n;
    scanf_s("%d", &n);
    char* name;
    name = (char*)malloc(sizeof(char) * (n + 1));
    char l;
    scanf_s("%c", &l);
    for (int i = 0; i < n; i++)
        scanf_s("%c", &name[i]);
    name[n] = 0;
    int ans = 0;
    scanf_s("%c", &l);
    for (int i = 0; i < n; i++) {
        scanf_s("%c", &l);
        if (l > name[i]) {
            if (l - name[i] < name[i] + 26 - l)
                ans += l - name[i];
            else
                ans += name[i] + 26 - l;
        }
        else {
            if (name[i] - l < l + 26 - name[i])
                ans += name[i] - l;
            else
                ans += l + 26 - name[i];
        }
    }
    printf("%d", ans);
    free(name);
}