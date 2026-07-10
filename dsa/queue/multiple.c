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

int main(){

    int j = 0;
    while(j < MAX){
        a_insert();
        j++;
    }
    a_del();
    a_display();
    return 0;
}
