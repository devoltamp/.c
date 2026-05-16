/* sort the array in increasing order
l = left
r = right
this was thought in 1962 now you can tell.
*/

#include <stdio.h>
#include <string.h>

void qsort (int v[], int l, int r){

    int i, last = 0;
    void swap (int v[], int i, int j);

    /* if the elements are only two */
    if (l >= r){
        printf("you mf\n");
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

    int v[] = {3, 2, 1};
    qsort(v, 0, 2);

    // for int it's diff
    int len = sizeof(v) / sizeof(v[0]);
    printf("%d\n", len);

    // the print
    for (int a = 0; a < 3; a++){
        printf("%d ", v[a]);
    }

    return 0;
}
