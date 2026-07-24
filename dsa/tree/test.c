/* attempt of printing straight from
the malloc */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int id;
    char *name;
} student;

int main(){

    /* s1 */
    student *s1;    /* do not forget the * */
    s1 = (student *)malloc(sizeof(student));
    if (s1 == NULL) return -1;

    /* assigning data
    s1 & it's pointer componets all required
    the external allocation of mem. */
    s1->id = 101;
    s1->name = (char *)malloc(50 * sizeof(char));
    strcpy(s1->name, "dev");

    /* s2 */
    student s2;
    s2.id = 102;
    s2.name = malloc(50);
    strcpy(s2.name, "akemi");

    printf("%d\n", s1->id);
    printf("%s\n", s1->name);
    printf("%d\n", s2.id);
    printf("%s\n", s2->name);

    free(s1->name);
    free(s1);
    free(s2.name);
    return 0;
}
