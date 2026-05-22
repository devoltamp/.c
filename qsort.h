#include <stdio.h>
#include <string.h>

void q_sort (char *v[], int l, int r){

    int i, last = 0;
    void swap (char *v[], int i, int j);

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
        if (strcmp(v[i], v[l]) < 0){
            swap (v, ++last, i);
        }
    }
    // do not make mistake of last to l
    swap(v, l, last);
    q_sort(v, l, last - 1);
    q_sort(v, last + 1, r);
}

void swap(char *v[], int i, int j){

    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
