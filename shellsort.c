/* this will sort to increasing order */
#include <stdio.h>
#define MAXLEN 100

void shellsort(int v[], int n){
    int i, j;
    int gap, temp;

    // main three loops

    for (gap = n/2; gap > 0; gap /= 2){
        for (i = gap; i < n; i++){
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap){
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }

    printf("sorted array:\n");
    for (int k = 0; k < n; k++){
        printf("%d ", v[k]);
    }
    printf("\n");
}

int main(){
    int v[MAXLEN];
    int n;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    // calling the f'n
    shellsort(v, n);

    return 0;
}
