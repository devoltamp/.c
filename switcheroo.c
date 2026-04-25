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

// if not writing into another thinge start with a main
// other wise name is whatever you like
int swticho(){

    char optionbuffer[4];
    printf("write something\n");
    scanf("%4s", optionbuffer);

    // while (optionbuffer[0] != STOP){
        switch (optionbuffer[0]){
            case STOP:
                handlestop();
                break;
            case CONTINUE:
                handlecontinue();
                break;
            case NEW:
                handlenew();
                break;
            case EDIT:
                handleedit();
                break;
            case DELETE:
                handledelete();
                break;
        }
    // }
    return 0;
}
