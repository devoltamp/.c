// it's not that popular to use this but we are gonna do it anyways
#include <stdio.h>
#include <string.h>

int main(){

    // if an element is commom
    const char a[] = "654";
    const char b[] = "987";

    int n = strlen(a);
    int m = strlen(b);
    int i,j = 0;
    printf("%zu", strlen(a));
    printf("%zu", strlen(b));
    printf("\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i] == b[j])
                goto found;
                // int temp = a[i];
            else
                printf("not found");
    // found acts as a defaults one
    found:
        printf("found one");

    return 0;
}
