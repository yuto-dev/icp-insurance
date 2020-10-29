#include <stdio.h>
#include <stdlib.h>

int  insClaim(), accInfo(), searchFunc();
void menu(), exitMenu(), subReg(), returnToMenu();

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
        subReg();
    }
    else if (option == 2){
        insClaim();
    }
    else if (option == 3){
        accInfo();
    }
    else if (option == 4){
        searchFunc();
    }
    else if (option == 5){
        exitMenu();
    }
    else{
        printf("Wrong input, please try again\n");
        menu();
    }
}

void subReg(){
    FILE *f = fopen("file.txt", "a");
    FILE *idgen = fopen("id.txt", "r");
    
    if (f == NULL){
    printf("Error opening file!\n");
    }

    int age, plan, id, nextid;
    char name[20], customer[128];

    fscanf(idgen,"%d", &id);
    nextid = id + 1;
    printf("Enter name: ");
    scanf(" %s", &name);
    printf("--------------\n");
    printf("Enter age: ");
    scanf("%d", &age);
    printf("--------------\n");
    printf("Available plans:\n");
    printf("1. 100\n");
    printf("2. 150\n");
    printf("3. 200\n");
    printf("Choose plan (enter 1,2, or 3): ");
    scanf(" %d", &plan);

    if (plan == 1){
        plan = 100;
    }
    else if(plan == 2){
        plan = 150;
    }
    else if(plan == 3){
        plan = 200;
    }
    else {
        printf("incorrect plan");
    }

    printf("--------------\n");
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%d\n", plan);
    printf("%d\n", nextid);
    printf("--------------\n");
    fprintf(f, "%d;%s;%d;%d\n", nextid,name, age, plan);
    fclose(f);
    fclose(idgen);

    FILE *idwrite = fopen("id.txt", "w");
    fprintf(idwrite, "%d", nextid);
    fclose(idwrite);

    returnToMenu();

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

void returnToMenu(){
    int navHolder;

    printf("Return to menu?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Choose option: ");
    scanf("%d", &navHolder);

    if (navHolder == 1){
        menu();
    }
    else if (navHolder == 2){
        exitMenu;
    }
    else{
        printf("Wrong input, please try again\n");
        returnToMenu();
    }
    
}

void exitMenu(){
    int placeholder;
    printf("Enter anything then press enter to quit: ");
    scanf("%d", placeholder);
}
