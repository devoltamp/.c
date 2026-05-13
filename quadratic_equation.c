/* i kinda don't like this declaration part a little*/
#include <stdio.h>
#include <math.h>

/* f'n declaration */
void linear(float, float);
void quadratic(float, float, float);
void tworealroots(float, float, float);
void onerealroot(float, float);
void twocomplexroots(float, float, float);

int main(){

    float a, b, c;
    printf("enter the coefficients a, b, and c\n");
    scanf("%f%f%f", &a, &b, &c);

    // no need to write a > 0 being the default
    if (a)
        quadratic(a, b, c);
    else
        linear(b, c);
    return 0;
}

void linear(float a, float b){
    if (a){
        printf("linear equation with solution: %f \n", -b/a);
    }
    else{
        if (b)
            printf("false equation\n");
        else
            printf("identical equation\n");
    }
}

void quadratic(float a, float b, float c){
    float d;
    d = b * b - 4 * a * c;
    if (d > 0) tworealroots(a, b, d);
    if (d == 0) onerealroot(a, b);
    if (d < 0) twocomplexroots(a, b, d);
}


void tworealroots(float a, float b, float d){
    float sqrt_d, x1, x2;
    sqrt_d = sqrt((double)d);
    x1 = (-b + sqrt_d) / 2 / a;
    x2 = (-b - sqrt_d) / 2 / a;
    printf("Two real roots: %f and %f \n", x1, x2);
}

void onerealroot(float a, float b){
    printf("One root %f \n", -b / 2 / a);
}

void twocomplexroots(float a, float b, float d){
    float re, im;
    re = -b / 2 / a;
    im = sqrt((double)(-d)) / 2 / a;
    printf("2 complex roots: %f+%fi and %f-%fi \n",re,im,re,im);
}
