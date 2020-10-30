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
    printf("------------------------------\n");
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

    FILE *idgen = fopen("nextid.txt", "r");

    int claim = 0;
    int age, plan, id, nextid, type, climit;
    char name[32];

    int placeholder;

    fscanf(idgen,"%d", &id);
    nextid = id + 1;

    printf("ZeeMediLife Health Insurance Plan\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("                       |     Plan120(RM)     |     Plan150(RM)     |     Plan200(RM)     \n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("Monthly Premium        |          120        |          150        |         200         \n");
    printf("Annual Claim Limit     |       120,000       |        150,000      |       200,000       \n");
    printf("Lifetime Claim Limit   |       600,000       |        750,000      |      1,000,000      \n");
    printf("-----------------------------------------------------------------------------------------\n");


    printf("Enter first name: ");
    scanf(" %s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 0 || age > 54){
        printf("We're sorry but we don't have any plans for the entered age, returning to main menu..\n");
        menu();
    }

    printf("Plan Types:\n");
    printf("1. Annual Claim\n");
    printf("2. Lifetime Claim\n");
    printf("Choose plan type: ");
    scanf(" %d", &type);
    if (type != 1){
        if (type != 2){
            printf("Wrong input, going back to main menu..");
            menu();
        }
    }
    //scanf("$d", placeholder);

    if ( 0 < age && age < 21) {
        if (type == 1){
            printf("Available Plans\n");
            printf("-----------------------------------------------------------------------------------------\n");
            printf("                       |     Plan120(RM)     |     Plan150(RM)     |     Plan200(RM)     \n");
            printf("-----------------------------------------------------------------------------------------\n");
            printf("Monthly Premium        |          120        |          150        |         200         \n");
            printf("Annual Claim Limit     |       120,000       |        150,000      |       200,000       \n");
            printf("-----------------------------------------------------------------------------------------\n");
            printf("1. RM 120 Plan\n");
            printf("2. RM 150 Plan\n");
            printf("3. RM 200 Plan\n");
            printf("Choose plan: ");
            scanf(" %d", &plan);
        }
        else if (type == 2){
            printf("Available Plans\n");
            printf("-----------------------------------------------------------------------------------------\n");
            printf("                       |     Plan120(RM)     |     Plan150(RM)     |     Plan200(RM)     \n");
            printf("-----------------------------------------------------------------------------------------\n");
            printf("Monthly Premium        |          120        |          150        |         200         \n");
            printf("Lifetime Claim Limit   |       600,000       |        750,000      |      1,000,000      \n");
            printf("-----------------------------------------------------------------------------------------\n");
            printf("1. RM 120 Plan\n");
            printf("2. RM 150 Plan\n");
            printf("3. RM 200 Plan\n");
            printf("Choose plan: ");
            scanf(" %d", &plan);
        }
        else{
            printf("Wrong input, going back to main menu..\n");
            menu();
        }
    }
    else if( 20 < age && age < 41 ){
        if (type == 1){
            printf("Available Plans\n");
            printf("-------------------------------------------------------------------\n");
            printf("                       |     Plan150(RM)     |     Plan200(RM)     \n");
            printf("-------------------------------------------------------------------\n");
            printf("Monthly Premium        |          150        |         200         \n");
            printf("Annual Claim Limit     |        150,000      |       200,000       \n");
            printf("-------------------------------------------------------------------\n");
            printf("1. RM 150 Plan\n");
            printf("2. RM 200 Plan\n");
            printf("Choose plan: ");
            scanf(" %d", &plan);
            if (plan == 1){
                plan = 2;
            }
            else if (plan == 2){
                plan = 3;
            }
        }
        else if (type == 2){
            printf("Available Plans\n");
            printf("-------------------------------------------------------------------\n");
            printf("                       |     Plan150(RM)     |     Plan200(RM)     \n");
            printf("-------------------------------------------------------------------\n");
            printf("Monthly Premium        |          150        |         200         \n");
            printf("Lifetime Claim Limit   |        750,000      |      1,000,000      \n");
            printf("-------------------------------------------------------------------\n");
            printf("1. RM 150 Plan\n");
            printf("2. RM 200 Plan\n");
            printf("Choose plan: ");
            scanf(" %d", &plan);
            if (plan == 1){
                plan = 2;
            }
            else if (plan == 2){
                plan = 3;
            }
        }    
        else{
            printf("Wrong input, going back to main menu..\n");
            menu();
        }
    }
    else if( 40 < age && age < 55 ){
        if (type == 1){
            printf("Available Plans\n");
            printf("---------------------------------------------\n");
            printf("                       |     Plan200(RM)     \n");
            printf("---------------------------------------------\n");
            printf("Monthly Premium        |         200         \n");
            printf("Annual Claim Limit     |       200,000       \n");
            printf("---------------------------------------------\n");
            plan = 3;
        }
        else if (type == 2){
            printf("Available Plans\n");
            printf("---------------------------------------------\n");
            printf("                       |     Plan200(RM)     \n");
            printf("---------------------------------------------\n");
            printf("Monthly Premium        |         200         \n");
            printf("Lifetime Claim Limit   |      1,000,000      \n");
            printf("---------------------------------------------\n");
            plan = 3;
        }
        else{
            printf("Wrong input, going back to main menu..\n");
            menu();
        }
    }

    if (type == 1){
        if (plan == 1){
            climit = 120000;
        }
        else if (plan == 2){
            climit = 150000;
        }
        else if (plan == 3){
            climit = 200000;
        }
        else {
            printf("Wrong input, returning to main menu..\n");
            menu();
        }
    }
    else if (type == 2){
        if (plan == 1){
            climit = 600000;
        }
        else if (plan == 2){
            climit = 750000;
        }
        else if (plan == 3){
            climit = 1000000;
        }
        else {
            printf("Wrong input, returning to main menu..\n");
            menu();
        }
    }

    // UNCOMMENT LATER
    FILE *fage = fopen("age.txt", "a");
    FILE *fclaim = fopen("claim.txt", "a");
    FILE *fclimit = fopen("climit.txt", "a");
    FILE *fid = fopen("id.txt", "a");
    FILE *fname = fopen("name.txt", "a");
    FILE *fplan = fopen("plan.txt", "a");
    FILE *ftype = fopen("type.txt", "a");

    fprintf(fage, "%d\n", age);
    fprintf(fclaim, "%d\n", claim);
    fprintf(fclimit, "%d\n", climit);
    fprintf(fid, "%d\n", nextid);
    fprintf(fname, "%s\n", name);
    fprintf(fplan, "%d\n", plan);
    fprintf(ftype, "%d\n", type);

    fclose(fage);
    fclose(fclaim);
    fclose(fclimit);
    fclose(fid);
    fclose(fname);
    fclose(fplan);
    fclose(ftype);

    fclose(idgen);

    FILE *idwrite = fopen("nextid.txt", "w");
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
