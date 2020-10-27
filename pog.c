#include <stdio.h>

int subReg(), insClaim(), accInfo(), searchFunc();
void menu(), exitMenu();

int main(){
    menu();
    return 0;
}

void menu(){
    char option[10];
    printf("1. Insurance Plan Subscription\n");
    printf("2. Insurance Fraud\n");
    printf("3. Accounts Information\n");
    printf("4. Search\n");
    printf("5. Exit\n");
    printf("Choose option: ");
    scanf("%c", &option);
    if (option == "1"){
        subReg();
    }
    else if (option == "2"){
        insClaim();
    }
    else if (option == "3"){
        accInfo();
    }
    else if (option == "4"){
        searchFunc();
    }
    else if (option == "5"){
        exitMenu();
    }
    else{
        printf("Wrong input, please try again\n");
        menu();
    }
}

int subReg(){
    int placeholder;
    printf("a\n");
    exitMenu();
}

int insClaim(){
    printf("b\n");
    exitMenu();
}

int accInfo(){
    printf("c\n");
    exitMenu();
}

int searchFunc(){
    printf("d\n");
    exitMenu();
}

void exitMenu(){
    int placeholder;
    printf("Enter anything then press enter to quit: ");
    scanf("%d", placeholder);
}