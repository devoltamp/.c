// comparision between the if and switch statements
#include <stdio.h>

enum option_e {
    STOP = 'q',
    CONTINUE = 'c',
    NEW = 'n',
    EDIT = 'e',
    DELETE = 'd',
};

// all the handlers
void handlestop(){
    printf("you said stop\n");
}
void handlecontinue(){
    printf("you said continue\n");
}
void handlenew(){
    printf("you said new\n");
}
void handleedit(){
    printf("you said edit\n");
}
void handledelete(){
    printf("you said delete\n");
}

int option(){

    char optionbuffer[4];
    printf("write something\n");
    scanf("%4s", optionbuffer);

    while (optionbuffer[0] != STOP){

        if (optionbuffer[0] == STOP){
            handlestop();
            break;
        }
        else if (optionbuffer[0] == CONTINUE){
            handlecontinue();
            break;
        }
        else if (optionbuffer[0] == NEW){
            handlenew();
            break;
        }
        else if (optionbuffer[0] == EDIT){
            handleedit();
            break;
        }
        else if (optionbuffer[0] == DELETE){
            handledelete();
            break;
        }
        else
            break;
    }
    return 0;
    /* there will be an additional python file to view out the assembly
    code
    */
}
