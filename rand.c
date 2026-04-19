// though it's unsigned range = 0 to 32767

#include <stdio.h>

static unsigned long int next = 1;

int rand(void) {
    next = next * 1103515245 + 12345;
    // printf("%ld\n", next);
    return (unsigned int)(next / 65536) % 32768;
}

void srand(unsigned int seed) {
    next = seed;
}

int main() {
    printf("%ld\n", next);
    srand(10);  // cause the next value will be already given to it

    int r = rand();
    printf("Random number: %d\n", r);
    return 0;
}
