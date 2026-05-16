// the goat 
#include <stdio.h>
#define BOX 219

void empty_box (void){

    int s;
    printf("enter the size of square: ");
    scanf("%d", &s);

    int mat[s][s];

    /* it is important to make all components
    zero other wise c will throw random sh*i */
    for (int r = 0; r < s; r++) {
        for (int c = 0; c < s; c++) {
            mat[r][c] = 0;
        }
    }

    /* to try to write up the bs in
    the matrix use some numbers*/
    for (int i = 0; i < s; i++) {
        mat[0][i] = 1;
        mat[s-1][i] = 1;
        mat[i][0] = 1;
        mat[i][s-1] = 1;
    }

    printf("empty box:\n");
    for (int r = 0; r < s; r++) {
        for (int c = 0; c < s; c++) {
            if (mat[r][c] == 1) {
                printf("%c", BOX);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void full_box (void){

    int s;
    printf("enter the size of square: ");
    scanf("%d", &s);

    int mat[s][s];

    // set all the values to 1
    for (int r = 0; r < s; r++) {
        for (int c = 0; c < s; c++) {
            mat[r][c] = 1;
        }
    }

    printf("full box:\n");
    for (int r = 0; r < s; r++) {
        for (int c = 0; c < s; c++) {
            if (mat[r][c] == 1) {
                printf("%c", BOX);
            } else {
                printf(" ");
            }
            // it will not go to else
        }
        printf("\n");
    }
}

int main() {

    int choose;

    printf("choose a number:\n");
    printf("\t1. draw an empty square\n");
    printf("\t2. draw a filled square\n");
    printf("\t3. exit\n");
    printf(":");
    scanf("%d", &choose);



    switch (choose) {
        case 1:
            empty_box();
            break;
        case 2:
            full_box();
            break;
        case 3:
            break;

        default:
            printf("\nenter a valid #n\n");
    }

    return 0;
}
