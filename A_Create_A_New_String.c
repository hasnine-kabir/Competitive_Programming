#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], t[1001];
    gets(s);
    gets(t);

    printf("%d %d\n", strlen(s), strlen(t));

    char st[strlen(s) + strlen(t) + 1];

    for (int i = 0; i < strlen(s); i++) {
        st[i] = s[i];
    }

    st[strlen(s)] = ' ';

    for (int i = strlen(s) + 1, j = 0; i <= strlen(t) + strlen(s) && j < strlen(t); i++, j++) {
        st[i] = t[j];
    }  st[strlen(s) + strlen(t) + 1] = '\0';

    printf("%s", st);
    return 0;
}
