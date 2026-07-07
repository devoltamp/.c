#include <stdio.h>

typedef struct{
    int x;
    int y;
} point;

/* a struct can't not contain itself via values
that would need infinite memory -- but an address is fine */
struct node{
    int data;
    struct node *next;
};

/* nested strt. */
struct date{
    int day, month, year;
};
struct employee{
    char name[50];
    float salary;
    struct date joiningdate;
};

/* array of structs */
struct student{
    char name[50];
    int marks;
};
struct student class[3] = {
    {"aman", 50},
    {"ashish", 50},
    {"akemi", 50}
};


int main(){

    point p1 = {10, 20};
    printf("%d, %d\n", p1.x, p1.y);

    /* really great for the table formation */
    for (int i = 0; i<3; i++){
        printf("%s: %d\n", class[i].name, class[i].marks);
    }

    return 0;
}
