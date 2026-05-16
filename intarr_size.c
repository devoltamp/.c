/* i don't see that much usage but still
i think it's kinda usefull */

#include <stdio.h>

int main(){


    int arr[] = {10,9,8,7,6,5,4,3,2,1};

    int len = sizeof(arr) / sizeof(arr[0]);
    printf("total entered: %d\n", len);

    /* this is like you know that you entered 10 but still
    gotta make sure */
    return 0;
}
