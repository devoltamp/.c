/* it'll work noicely in the linux based os.
in windows it's a little bit trash*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#define BLUE    "\x1b[34m"


void printheader() {
    FILE *file = fopen("banner.txt", "r");

    if (!file) {
        printf("banner not found....\n");
        return;
    }

    int i = 0;
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        for (int i = 0; line[i] != '\0'; i++) {
            putchar(line[i]);
            fflush(stdout);
            Sleep(80); /* the sleep f'n in the windows is weird*/
        }
    }
    // the S is capital
    fclose(file);
}

int main(){
    printheader();
    return 0;
}
