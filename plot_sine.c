#include <stdio.h>
#include <math.h>


int main(){

    double angle[10];
    double value[10];
    // const double pi = acos(-1.0);
    double y_axis[10];
    double temp = 0;

    // angle loop
    for(int a=0; a<10; a++){
        temp = (a + 1) * 36;
        temp = (M_PI/180)*temp;
        angle[a] = temp;
        printf("%f\n", angle[a]);
    }

    printf("############\n");

    // value loop
    for(int i=0; i<10; i++){
        value[i] = sin(angle[i]);
        printf("%f\n", value[i]);
    }

    printf("############\n");

    // y - axis
    for(int y = 0; y<10; y++){
        y_axis[y] = y;
        printf("%f", y_axis[y]);
    }






    return 0;
}
