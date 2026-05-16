#include <stdio.h>
#include <string.h>

int main(){

    char ptt[] = "ould";
    char ptt01[] = {'o', 'u', 'l', 'd'};
    // '' & "" both are diff

    int n = strlen(ptt);
    int m = strlen(ptt01); // it gives 8 somehow but it's fine
    printf("%d %d\n", n, m);

    for (int i = 0; i < m; i++)
        printf("%c", ptt01[i]);

    return 0;
}
