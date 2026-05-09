#include <stdio.h>
#define box 219

int main() {
    int num;

    printf("enter any odd #n: ");
    scanf("%d", &num);

    int arr[num];

    arr[0] = num;
    int rows = 0;
    for (int i = 1; i < num; i++) {
        arr[i] = arr[i-1] - 2;
        if (arr[i] > 0) rows = i;
    }
    rows += 1;

    // main loop for row
    for (int q = 0; q < rows; q++) {

        // indentation
        for (int s = 0; s < q; s++) {
            printf(" ");
        }

        // print blocks
        for (int w = 0; w < arr[q]; w++) {
            printf("%c", box);
            // printf("%c", box);
        }

        // new line for the next one
        printf("\n");
    }

    // do the brackets otherwise it'll throw random sh*t in it
    return 0;
}
