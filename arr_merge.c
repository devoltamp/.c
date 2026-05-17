/* best logic that i've made
works like a charm
*/

#include <stdio.h>
#include "qsort_any.h"
#define SIZE 5

void readarray (int x[], int len){

    int i;
    printf("enter %d integer numbers: \n", len);
    for (i = 0; i<len; i++){
        printf("enter number %3d: ", i+1);
        scanf("%d", &x[i]);
    }
}

void printarray (int a[], int b[], int len){

    int m_len = 2 * len;
    int m_arr[m_len];

    /* sh*ty code i wrote
    int i = 0;
    while (i < len){
        m_arr[i] = a[i];
        printf("%d ", m_arr[i]);
        ++i;
    }
    int j = len - 1;
    int p = 0;
    while (j < m_len && p < len){
        m_arr[j] = b[p];
        printf("%d ", m_arr[j]);
        ++j;
        ++p;
    }

    while (i < len){
        m_arr[len + i] = b[i];
        printf("%d ", m_arr[len + i]);
    }
    */

    printf("\nmerged array: \n");
    for (int i = 0; i < len; i++) {
        m_arr[i] = a[i];
        printf("%d ", m_arr[i]);
    }
    for (int i = 0; i < len; i++) {
        m_arr[len + i] = b[i];
        printf("%d ", m_arr[len + i]);
    }
    printf("\n");


    qsort(m_arr, 0, m_len - 1);
    printf("\nsorted array: \n");
    for (int a = 0; a < m_len; a++){
        printf("%d ", m_arr[a]);
    }
}


int main(){

    int a[SIZE];
    int b[SIZE];

    readarray(a, SIZE);
    readarray(b, SIZE);
    printarray(a, b, SIZE);



    return 0;
}
