/* front = f, rear = r
some reason that to do with the mem. in total */
#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int queue[MAX];
int fa = -1, ra = -1;
int fb = MAX, rb = MAX;

void a_insert(){

    int val;
    printf("enter data: ");
    scanf("%d", &val);
    if (ra == rb - 1){
        puts("overflow");
    }
    else{
        if (ra == -1 && fa == -1){
            ra = fa = 0;
            queue[ra] = val;
        }
        else{
            queue[++ra] = val;
        }
    }
}

int a_del(){

    int val;
    if (fa == -1){puts("empty"); return -1;}
    else{
        val = queue[fa];
        fa++;
        if (fa > ra){fa = ra = -1;}
        return val;
    }
}

void a_display(){
    if (fa == -1){puts("empty");}
    else{
        int i = fa;
        while(i <= ra){
            printf("%d ", queue[i]);
            i++;
        }
        /* = this could change the whole logic */
    }
}

void b_insert(){

    int val;
    printf("enter data: ");
    scanf("%d", &val);

    if (ra == rb - 1){
        puts("overflow");
    }
    else{
        /* only one time */
        if (rb == MAX && fb == MAX){
            rb = fb = MAX - 1;
            queue[rb] = val;    /* indexing matters */
        }
        /* rest of the time */
        else{
            queue[--rb] = val;
        }
    }
}

int b_del(){

    int val;
    if (fb == MAX){
        puts("full");
        return -1;
    }
    else{
        val = queue[fb];
        fb--;
        if (fb < rb){
            fb = rb = MAX;
        }
        return val;
    }
}

void b_display(){

    if (fb == MAX){
        puts("queue - B is empty");
    }
    else{
        int i;
        for (i = fb; i>= rb; i--){
            printf("%d ", queue[i]);
        }
    }
}

int main(){

    int j = 0;
    while (j < MAX){
        a_insert();
        j++;
    }
    a_del();
    a_display();
    printf("\n");

    /* once all the queue is fill
    it'll not accept answer from the rear que. B
    -- that's pretty cool */
    while (j < MAX){
        b_insert();
    }
    b_del();
    b_display();

    return 0;
}
