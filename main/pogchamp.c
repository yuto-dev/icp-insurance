#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exitMenu();
void menu(), accInfo(), accInfoA(), accInfoB(), subReg(), returnToMenu(), insClaim(), searchFunc();
void searchID(), searchName(), searchPlan(), searchType(), searchAge(), actualSearch(int);

int main(){
    menu();
    return 0;
}

void menu(){
    int option;
    printf("ZeeMediLife Health Insurance Management System\n");
    printf("------------------------------\n");
    printf("1. Insurance Plan Subscription\n");
    printf("2. Insurance Claim\n");
    printf("3. Accounts Information\n");
    printf("4. Search\n");
    printf("5. Exit\n");
    printf("------------------------------\n");
    printf("Choose option: ");
    scanf("%d", &option);
    if (option == 1){
        printf("------------------------------\n");
        subReg();
    }
    else if (option == 2){
        printf("------------------------------\n");
        insClaim();
    }
    else if (option == 3){
        printf("------------------------------\n");
        accInfo();
    }
    else if (option == 4){
        printf("------------------------------\n");
        searchFunc();
    }
    else if (option == 5){
        printf("------------------------------\n");
        exitMenu();
    }
    else{
        printf("------------------------------\n");
        printf("Wrong input, please try again\n");
        menu();
    }
}

void subReg(){

    FILE *idgen = fopen("nextid.txt", "r");

    int claim = 0;
    int age, plan, id, nextid, type, climit, claimable;
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

    claimable = climit;

    // UNCOMMENT LATER
    FILE *fage = fopen("age.txt", "a");
    FILE *fclaim = fopen("claim.txt", "a");
    FILE *fclaimable = fopen("claimable.txt", "a");
    FILE *fclimit = fopen("climit.txt", "a");
    FILE *fid = fopen("id.txt", "a");
    FILE *fname = fopen("name.txt", "a");
    FILE *fplan = fopen("plan.txt", "a");
    FILE *ftype = fopen("type.txt", "a");
    FILE *foverlimit = fopen("overlimit.txt", "a");
    FILE *fyear = fopen("year.txt", "a");

    fprintf(fage, "%d\n", age);
    fprintf(fclaim, "%d\n", claim);
    fprintf(fclaimable, "%d\n", claimable);
    fprintf(fclimit, "%d\n", climit);
    fprintf(fid, "%d\n", nextid);
    fprintf(fname, "%s\n", name);
    fprintf(fplan, "%d\n", plan);
    fprintf(ftype, "%d\n", type);
    fprintf(foverlimit, "0\n");
    fprintf(fyear, "0\n");

    fclose(fage);
    fclose(fclaim);
    fclose(fclaimable);
    fclose(fclimit);
    fclose(fid);
    fclose(fname);
    fclose(fplan);
    fclose(ftype);
    fclose(foverlimit);
    fclose(fyear);

    fclose(idgen);

    FILE *idwrite = fopen("nextid.txt", "w");
    fprintf(idwrite, "%d", nextid);
    fclose(idwrite);

    returnToMenu();

}

void insClaim(){
    
    int x, id, idlimit, limit, placeholder, count;
    int lineNumber;
    
    char name[32];
    int claim, claimable, type, plan, year, overlimit;

    printf("Enter ID: ");
    scanf("%d", &x);
    lineNumber = x - 1;

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &idlimit);
    limit = idlimit;

    // Check whether the entered ID is valid or not.
    if (x < 0 || x > idlimit){
        printf("ID not found, returning to main menu..\n");
        menu();
    }
    
    // Declare crawling variables
    char cLine[32];
    int iLine;

    count = 0;
    FILE *fname = fopen("name.txt", "r");
    while (count < limit){
        fscanf(fname, "%s", &cLine);
        if (count == lineNumber){
            strcpy(name,cLine);
        }
        count++;
    }
    fclose(fname);
    printf("Welcome, %s\n", name);

    count = 0;
    int claimHolder[limit];
    FILE *fclaim = fopen("claim.txt", "r");
    while (count < limit){
        fscanf(fclaim, "%d", &iLine);
        if (count == lineNumber){
            claim = iLine;
        }
        claimHolder[count] = iLine;
        count++;
    }
    fclose(fclaim);
    
    count = 0;
    int claimableHolder[limit];
    FILE *fclaimable = fopen("claimable.txt", "r");
    while (count < limit){
        fscanf(fclaimable, "%d", &iLine);
        if (count == lineNumber){
            claimable = iLine;
        }
        claimableHolder[count] = iLine;
        count++;
    }
    fclose(fclaimable);

    count = 0;
    int overlimitHolder[limit];
    FILE *foverlimit = fopen("overlimit.txt", "r");
    while (count < limit){
        fscanf(foverlimit, "%d", &iLine);
        if (count == lineNumber){
            overlimit = iLine;
        }
        overlimitHolder[count] = iLine;
        count++;
    }
    fclose(foverlimit);

    count = 0;
    FILE *ftype = fopen("type.txt", "r");
    while (count < limit){
        fscanf(ftype, "%d", &iLine);
        if (count == lineNumber){
            type = iLine;
        }
        count++;
    }
    fclose(ftype);

    count = 0;
    FILE *fplan = fopen("plan.txt", "r");
    while (count < limit){
        fscanf(fplan, "%d", &iLine);
        if (count == lineNumber){
            plan = iLine;
        }
        count++;
    }
    fclose(fplan);

    count = 0;
    int yearHolder[limit];
    FILE *fyear = fopen("year.txt", "r");
    while (count < limit){
        fscanf(fyear, "%d", &iLine);
        if (count == lineNumber){
            year = iLine;
        }
        yearHolder[count] = iLine;
        count++;
    }
    fclose(fyear);

    int roomDays, icuDays, roomCharge, icuCharge;
    printf("Enter how many days spent in hospital room: ");
    scanf("%d", &roomDays);
    printf("Enter how many days spent in ICU: ");
    scanf("%d", &icuDays);
    if (roomDays < 0 || icuDays < 0){
        printf("Days spent can not be less than 0, returning to main menu..\n");
        menu();
    }

    if (plan == 1){
        roomCharge = roomDays * 120;
        icuCharge = icuDays * 250;
    }
    else if (plan == 2){
        roomCharge = roomDays * 150;
        icuCharge = icuDays * 400;
    }
    else if (plan == 3){
        roomCharge = roomDays * 200;
        icuCharge = icuDays * 700;
    }

    int hSupply, hSurgical, hOther;
    printf("Enter amount of hospital supplies and service charges: ");
    scanf("%d", &hSupply);
    printf("Enter amount of surgical charges: ");
    scanf("%d", &hSurgical);
    printf("Enter amount of other charges: ");
    scanf("%d", &hOther);

    int sum = 0, outstand, printOutstand;
    sum = roomCharge + icuCharge + hSupply + hSurgical + hOther;
    outstand = claimable - sum;
    printOutstand = 0 - outstand;

    if (outstand < 0){
        printf("You have surpassed your claim limit and have RM %d outstanding fees\n", printOutstand);
        overlimit = 1;
    }
    printf("---------------------\n");
    printf("Subscriber Details\n");
    printf("ID: %d\n", x);
    printf("Name: %s\n", name);
    printf("Year Claimed: 1\n");
    printf("Insurance Claimed: %d\n", sum);
    printf("Balance left: %d\n", outstand);
    printf("---------------------\n");

    claimableHolder[lineNumber] = outstand;
    FILE *claimableWrite = fopen("claimable.txt", "w");
    fprintf(claimableWrite, "%d\n", claimableHolder[0]);
    fclose(claimableWrite);
    FILE *claimableAppend = fopen("claimable.txt", "a");
    count = 1;
    while (count < limit){
        fprintf(claimableAppend, "%d\n", claimableHolder[count]);
        count++;
    }
    fclose(claimableAppend);

    claimHolder[lineNumber] = sum;
    FILE *claimWrite = fopen("claim.txt", "w");
    fprintf(claimWrite, "%d\n", claimHolder[0]);
    fclose(claimWrite);
    FILE *claimAppend = fopen("claim.txt", "a");
    count = 1;
    while (count < limit){
        fprintf(claimAppend, "%d\n", claimHolder[count]);
        count++;
    }
    fclose(claimAppend);

    yearHolder[lineNumber] = 1;
    FILE *yearWrite = fopen("year.txt", "w");
    fprintf(yearWrite, "%d\n", yearHolder[0]);
    fclose(yearWrite);
    FILE *yearAppend = fopen("year.txt", "a");
    count = 1;
    while (count < limit){
        fprintf(yearAppend, "%d\n", yearHolder[count]);
        count++;
    }
    fclose(yearAppend);

    if (type == 1 && overlimit == 1){
        overlimitHolder[lineNumber] = 1;
        FILE *overlimitWrite = fopen("overlimit.txt", "w");
        fprintf(overlimitWrite, "%d\n", overlimitHolder[0]);
        fclose(overlimitWrite);
        FILE *overlimitAppend = fopen("overlimit.txt", "a");
        count = 1;
        while (count < limit){
            fprintf(overlimitAppend, "%d\n", overlimitHolder[count]);
            count++;
        }
        fclose(overlimitAppend);
    }

    int nextclaim;
    if (type == 2){
        FILE *lifeclaimAppend = fopen("lifeclaim.txt", "a");
        fprintf(lifeclaimAppend, "%d\n", sum);
        fclose(lifeclaimAppend);

        FILE *fnextclaim = fopen("nextclaim.txt", "r");
        fscanf(fnextclaim,"%d", &nextclaim);
        nextclaim = nextclaim + 1;
        fclose(fnextclaim);

        FILE *fnextclaimwrite = fopen("nextid.txt", "w");
        fprintf(fnextclaimwrite, "%d", nextclaim);
        fclose(fnextclaimwrite);
    }
    returnToMenu();
}

void accInfo(){
    accInfoA();
    accInfoB();
    returnToMenu();
}

void searchFunc(){

    int searchCriteria;
    
    printf("Available Search Criteria\n");
    printf("1. Search by ID\n");
    printf("2. Search by name\n");
    printf("3. Search by plan\n");
    printf("4. Search by claim limit type\n");
    printf("5. Search by age\n");

    printf("Choose option: ");
    scanf("%d", &searchCriteria);

    if (searchCriteria == 1){
        printf("------------------------------\n");
        searchID();
        returnToMenu();
    }
    else if (searchCriteria == 2){
        printf("------------------------------\n");
        searchName();
        returnToMenu();
    }
    else if (searchCriteria == 3){
        printf("------------------------------\n");
        searchPlan();
        returnToMenu();
    }
    else if (searchCriteria == 4){
        printf("------------------------------\n");
        searchType();
        returnToMenu();
    }
    else if (searchCriteria == 5){
        printf("------------------------------\n");
        searchAge();
        returnToMenu();
    }
    else{
        printf("Wrong input, returning to menu..\n");
        menu();
    }
}

void accInfoA(){
    int count, sum = 0, line, limit;

    FILE *nextlimit = fopen("nextclaim.txt", "r");
    fscanf(nextlimit,"%d", &limit);
    fclose(nextlimit);

    FILE *flifeclaim = fopen("lifeclaim.txt", "r");
        count = 0;
        while (count < limit){
            fscanf(flifeclaim, "%d", &line);
            sum = sum + line;
            count++;
        }
        fclose(flifeclaim);

    printf("Total amount claimed by Lifetime Claim Limit Subscribers: RM %d\n", sum);
}

void accInfoB(){
    int count, sum = 0, line, limit;

    FILE *nextlimit = fopen("nextid.txt", "r");
    fscanf(nextlimit,"%d", &limit);
    fclose(nextlimit);

    FILE *foverlimit = fopen("overlimit.txt", "r");
        count = 0;
        while (count < limit){
            fscanf(foverlimit, "%d", &line);
            sum = sum + line;
            count++;
        }
        fclose(foverlimit);

    printf("Total number of Annual Claim Limit subscribers who have exhausted all their eligible amount: %d\n", sum);
}

void actualSearch(int x){

    int count, limit, line, lineNumber;
    char name[32];

    lineNumber = x - 1;

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    char cLine[32];
    int iLine;

    int year, plan, type, claimable, age;

    count = 0;
    FILE *fname = fopen("name.txt", "r");
    while (count < limit){
        fscanf(fname, "%s", &cLine);
        if (count == lineNumber){
            strcpy(name,cLine);
        }
        count++;
    }
    fclose(fname);

    count = 0;
    FILE *fclaimable = fopen("claimable.txt", "r");
    while (count < limit){
        fscanf(fclaimable, "%d", &iLine);
        if (count == lineNumber){
            claimable = iLine;
        }
        count++;
    }
    fclose(fclaimable);

    count = 0;
    FILE *ftype = fopen("type.txt", "r");
    while (count < limit){
        fscanf(ftype, "%d", &iLine);
        if (count == lineNumber){
            type = iLine;
        }
        count++;
    }
    fclose(ftype);

    count = 0;
    FILE *fplan = fopen("plan.txt", "r");
    while (count < limit){
        fscanf(fplan, "%d", &iLine);
        if (count == lineNumber){
            plan = iLine;
        }
        count++;
    }
    fclose(fplan);

    count = 0;
    FILE *fyear = fopen("year.txt", "r");
    while (count < limit){
        fscanf(fyear, "%d", &iLine);
        if (count == lineNumber){
            year = iLine;
        }
        count++;
    }
    fclose(fyear);

    count = 0;
    FILE *fage = fopen("age.txt", "r");
    while (count < limit){
        fscanf(fage, "%d", &iLine);
        if (count == lineNumber){
            age = iLine;
        }
        count++;
    }
    fclose(fyear);

    printf("------------------------------\n");
    printf("Subscriber Record\n");
    printf("ID: %d\n", x);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    if (type == 1){
        printf("Claim Limit Type: Annual\n");
    }
    else if (type == 2){
        printf("Claim Limit Type: Lifetime\n");
    }
    if (plan == 1){
        printf("Plan: Plan120\n");
    }
    else if (plan == 2){
        printf("Plan: Plan150\n");
    }
    else if (plan == 3){
        printf("Plan: Plan200\n");
    }
    printf("Year(s) Claimed: %d\n", year);
    printf("Balance left: %d\n", claimable);
    printf("------------------------------\n");

}

void searchID(){

    int id;

    printf("Enter ID: ");
    scanf("%d", id);
    
    actualSearch(id);
    returnToMenu();
}

void searchName(){

    int count, idCount, limit, idCatch, idIndex = 0;
    char name[32], cLine[32];
    int idHolder[32];
    int strComp;

    printf("Enter name: ");
    scanf(" %s", &name);

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    count = 0;
    FILE *fname = fopen("name.txt", "r");
    while (count < limit){
        fscanf(fname, "%s", &cLine);
        strComp = strcmp(cLine, name);
        if (strComp == 0){
            idCatch = count + 1;
            idHolder[idIndex] = idCatch;
            idIndex++;
        }
        count++;
    }
    fclose(fname);

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

    returnToMenu();
}

void searchPlan(){

    int count, idCount, limit, idCatch, idIndex = 0, plan, iLine;
    char cLine[32];
    int idHolder[32];
    int strComp;

    printf("1. Plan120\n");
    printf("2. Plan150\n");
    printf("3. Plan200\n");
    printf("Enter plan: ");
    scanf(" %d", &plan);

    if (plan < 0 || plan > 3){
        printf("Wrong input, returning to main menu..\n");
        menu();
    }

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    count = 0;
    FILE *fplan = fopen("plan.txt", "r");
    while (count < limit){
        fscanf(fplan, "%d", &iLine);
        if (iLine == plan){
            idCatch = count + 1;
            idHolder[idIndex] = idCatch;
            idIndex++;
        }
        count++;
    }
    fclose(fplan);

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

    returnToMenu();
}

void searchType(){

    int count, idCount, limit, idCatch, idIndex = 0, type, iLine;
    int idHolder[32];

    printf("1. Annual Claim Limit\n");
    printf("2. Lifetime Claim Limit\n");
    printf("Enter claim limit: ");
    scanf(" %d", &type);

    if (type < 0 || type > 2){
        printf("Wrong input, returning to main menu..\n");
        menu();
    }

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    count = 0;
    FILE *ftype = fopen("type.txt", "r");
    while (count < limit){
        fscanf(ftype, "%d", &iLine);
        if (iLine == type){
            idCatch = count + 1;
            idHolder[idIndex] = idCatch;
            idIndex++;
        }
        count++;
    }
    fclose(ftype);

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

    returnToMenu();
}

void searchAge(){

    int count, idCount, limit, idCatch, idIndex = 0, age, iLine;
    int idHolder[32];

    printf("Enter age: ");
    scanf(" %d", &age);

    if (age < 0 || age > 55){
        printf("Wrong input, returning to main menu..\n");
        menu();
    }

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    count = 0;
    FILE *fage = fopen("age.txt", "r");
    while (count < limit){
        fscanf(fage, "%d", &iLine);
        if (iLine == age){
            idCatch = count + 1;
            idHolder[idIndex] = idCatch;
            idIndex++;
        }
        count++;
    }
    fclose(fage);

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

    returnToMenu();
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

int exitMenu(){
    return 0;
}
