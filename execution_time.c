// best code i've written so far

#include <stdio.h>
#include <time.h>
// #include "iferoo.c" /* taken from another file*/
#include "switcheroo.c"

void complex_task() {
    long int sum = 0;
    for (long int i = 0; i < 10; i++) {
        sum += i;
    }
    printf("%ld\n",sum);
    // handledelete();
    // option();
    swticho();
}

int main() {
    clock_t start_time, end_time;
    double cpu_time_used;

    start_time = clock();

    // task perform
    complex_task();

    end_time = clock();

    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("The task took %f seconds to execute.\n", cpu_time_used);

    return 0;
}
