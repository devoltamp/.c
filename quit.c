// enter not required

#include <stdio.h>
#include <conio.h>

int main() {
    char choice;

    printf("press 'q' to quit instantly...\n");
    while (1) {

        choice = _getch(); // fastest one

        if (choice == 'q' || choice == 'Q') {
            printf("exiting program.\n");
            break;
            // main work is done by the break but who cares -dr
        }
    }
    return 0;
}
