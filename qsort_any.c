/* sort the array in increasing order
l = left
r = right
this was thought in 1962 now you can tell.
*/

#include <stdio.h>

#define MAX 10

void qsort (int v[], int l, int r){

    int i, last = 0;
    void swap (int v[], int i, int j);

    /* if the elements are only two */
    if (l >= r){
        // printf("you mf\n");
        /* during the exicution this
        part exicutes two times
        that we can actually count
        -- that's pretty cool */
        return;
    }

    swap(v, l, (l + r)/2);
    last = l;

    for (i = l + 1; i <= r; i++){
        if (v[i] < v[l]){
            swap (v, ++last, i);
        }
    }
    // do not make mistake of last to l
    swap(v, l, last);
    qsort(v, l, last - 1);
    qsort(v, last + 1, r);
}

void swap(int v[], int i, int j){

    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main(){

    int max;
    printf("enter the max #n: \n");
    scanf("%d", &max);
    printf("enter the numbers: \n");

    int arr[max];
    for (int i = 0; i<max; i++){
        scanf("%d", &arr[i]);
    }

    /* for the random #n's support
    int i;
    srand(time(NULL)); // o'clock everytime

    for (i = 0; i<max; i++)
        printf("%ld ", (rand() % 300) + 1);
        int temp1 = (int)((rand() % 300) + 1);
        arr[i] = temp1;
    printf("\n");
    */


    // for int it's diff
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("total entered: %d\n", len);

    qsort(arr, 0, len);

    // the print
    printf("sorted array: \n");
    for (int a = 0; a < len; a++){
        printf("%d ", arr[a]);
    }

    return 0;
}
