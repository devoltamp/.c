/* parentheses checker */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
int top = -1;
int stk[MAX];

/* this is more related to the char. */
void push(char c){
    if (top = MAX - 1){
        puts("stack overflow");
    }
    else{
        stk[top++] = c;
    }
}

char pop(){
    if (top == -1){
        puts("stack empty");
    }
    else{
        return(stk[top--]);
    }
}

int main(){

    char exp[MAX], temp;
    int i, flag = 1;    /* the overall control */

    system("cls");
    printf("enter an expression: ");
    gets(exp);
    for (i = 0; i<strlen(exp); i++){

        if (exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(exp[i]);
        }
        if (exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if (top == -1)
                flag = 0;

            /* some hardc*re comparision */
            else{
                temp = pop();
                if (exp[i] == ')' && (temp == '{' || temp =='['))
                    flag = 0;
                if (exp[i] == '}' && (temp == '(' || temp == '['))
                    flag = 0;
                if (exp[i] == ']' && (temp == '(' || temp == '{'))
                    flag = 0;
            }
        }
    }
    if (top >= 0){
        flag = 0;
    }
    if (flag == 1){
        puts("valid expression");
    }
    else{
        puts("invalid expression");
    }

    return 0;
}
