#include <stdio.h>

int sub(), fraud(), doxx(), google();
void menu(), exitMenu();

int main(){
    menu();
    return 0;
}

void menu(){
    int option;
    printf("1. Insurance Plan Subscription\n");
    printf("2. Insurance Fraud\n");
    printf("3. Accounts Information\n");
    printf("4. Search\n");
    printf("5. Exit\n");
    printf("Choose option: ");
    scanf("%d", &option);
    if (option == 1){
        sub();
    }
    else if (option == 2){
        fraud();
    }
    else if (option == 3){
        doxx();
    }
    else if (option == 4){
        google();
    }
    else if (option == 5){
        exitMenu();
    }
    else{
        printf("Wrong input, please try again\n");
        menu();
    }
}

int sub(){
    int placeholder;
    printf("a\n");
    exitMenu();
}

int fraud(){
    printf("b\n");
    exitMenu();
}

int doxx(){
    printf("c\n");
    exitMenu();
}

int google(){
    printf("d\n");
    exitMenu();
}

void exitMenu(){
    int placeholder;
    printf("Enter anything then press enter to quit: ");
    scanf("%d", placeholder);
}