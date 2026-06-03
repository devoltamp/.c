/* fprintf -- formatted file output */

#include <stdio.h>

int main(){

    FILE *file = fopen("file02.txt", "w");
    if (file == NULL){
        puts("file not found!");
        return -1;
    }

    /* making some list of things */
    char item[] = "laptop";
    int quantity = 5;
    double price = 71.000;

    fprintf(file, "--- REPORT ---\n");
    fprintf(file, "items: \t%s\n", item);
    fprintf(file, "quant: \t%d\n", quantity);
    fprintf(file, "price: \t$%.2f\n", price);
    fprintf(file, "total: \t$%.2f\n", quantity * price);
    fclose(file);
    /* it was just "w" -- that's why no "peaking" */


    FILE *_file = fopen("file02.txt", "r");
    /* printing the report */
    int c;
    while((c = getc(file)) != EOF){
        putc(c, stdout);
        /* instead of stdout could also write file */
    }
    fclose(_file);

    return 0;
}
