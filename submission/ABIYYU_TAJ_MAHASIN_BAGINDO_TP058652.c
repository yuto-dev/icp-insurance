//ABIYYU TAJ MAHASIN BAGINDO
// TP058652

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exitMenu();
void menu(), accInfo(), accInfoA(), accInfoB(), subReg(), returnToMenu(), insClaim(), searchFunc();
void searchID(), searchName(), searchPlan(), searchType(), searchAge(), actualSearch(int);

int main(){

    // First step of the program, runs the function "menu" to display the main menu.

    menu();
    return 0;
}

void menu(){

    // The function menu displays the options that the user have and
    // runs the relevant function depending on user input.

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

    // Checks for user input and run the designated function.

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

    // The function "subReg" which stands for Subscriber Registration is the
    // function that handles a new subscriber's registration process.

    // Variable declarations.

    int claim = 0;
    int age, plan, id, nextid, type, claimable;
    char name[32];

    // Reads the file "nextid.txt" for User ID generation.

    FILE *idgen = fopen("nextid.txt", "r");
    fscanf(idgen,"%d", &id);
    fclose(idgen);
    nextid = id + 1;

    // Prints a table that shows all the available plans

    printf("ZeeMediLife Health Insurance Plan\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("                       |     Plan120(RM)     |     Plan150(RM)     |     Plan200(RM)     \n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("Monthly Premium        |          120        |          150        |         200         \n");
    printf("Annual Claim Limit     |       120,000       |        150,000      |       200,000       \n");
    printf("Lifetime Claim Limit   |       600,000       |        750,000      |      1,000,000      \n");
    printf("-----------------------------------------------------------------------------------------\n");

    // Prompts user for their first name and age.

    printf("Enter first name: ");
    scanf(" %s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 0 || age > 54){
        printf("We're sorry but we don't have any plans for the entered age, returning to main menu..\n");
        menu();
    }

    // Prompts user for their plan type.

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

    // Checks user's age and displays the relevant plans and
    // prompt the user to choose a plan. 

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

    // Translates user input to actual claim limit.

    if (type == 1){
        if (plan == 1){
            claimable = 120000;
        }
        else if (plan == 2){
            claimable = 150000;
        }
        else if (plan == 3){
            claimable = 200000;
        }
        else {
            printf("Wrong input, returning to main menu..\n");
            menu();
        }
    }
    else if (type == 2){
        if (plan == 1){
            claimable = 600000;
        }
        else if (plan == 2){
            claimable = 750000;
        }
        else if (plan == 3){
            claimable = 1000000;
        }
        else {
            printf("Wrong input, returning to main menu..\n");
            menu();
        }
    }

    // Opens all the text files where subscriber data will be kept.

    FILE *fage = fopen("age.txt", "a");
    FILE *fclaim = fopen("claim.txt", "a");
    FILE *fclaimable = fopen("claimable.txt", "a");
    FILE *fid = fopen("id.txt", "a");
    FILE *fname = fopen("name.txt", "a");
    FILE *fplan = fopen("plan.txt", "a");
    FILE *ftype = fopen("type.txt", "a");
    FILE *foverlimit = fopen("overlimit.txt", "a");
    FILE *fyear = fopen("year.txt", "a");

    // Writes subscriber data to the opened text files.

    fprintf(fage, "%d\n", age);
    fprintf(fclaim, "%d\n", claim);
    fprintf(fclaimable, "%d\n", claimable);
    fprintf(fid, "%d\n", nextid);
    fprintf(fname, "%s\n", name);
    fprintf(fplan, "%d\n", plan);
    fprintf(ftype, "%d\n", type);
    fprintf(foverlimit, "0\n");
    fprintf(fyear, "0\n");

    // Closes all previously opened text files.

    fclose(fage);
    fclose(fclaim);
    fclose(fclaimable);
    fclose(fid);
    fclose(fname);
    fclose(fplan);
    fclose(ftype);
    fclose(foverlimit);
    fclose(fyear);

    // Writes down newly generated ID for the next registering subscriber.

    FILE *idwrite = fopen("nextid.txt", "w");
    fprintf(idwrite, "%d", nextid);
    fclose(idwrite);

    // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();

}

void insClaim(){
    
    // The "insClaim" function which stands for "Insurance Claim" handles
    // insurance claim processes when a subscriber applies for one.

    // Variable declarations.

    int x, id, idlimit, limit, count;
    int lineNumber;
    
    char name[32];
    int claim, claimable, type, plan, year, overlimit;

    // Prompts user for their ID, subtract by 1, and assign to
    // the variable "lineNumber" since counting starts from 0.

    printf("Enter ID: ");
    scanf("%d", &x);
    lineNumber = x - 1;

    // Reads the "nextid.txt" file to find the amount of existing
    // subscribers to be used as a crawling limiter.

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &idlimit);
    limit = idlimit;

    // Checks whether the entered ID is valid or not.

    if (x < 0 || x > idlimit){
        printf("ID not found, returning to main menu..\n");
        menu();
    }
    
    // Crawling variable declarations.

    char cLine[32];
    int iLine;

    //      Reads the file "name.txt" into the variable "cLine" and
    // if the value of the variable "count" matches with the value
    // of the variable "lineNumber", the value of the variable "cLine"
    // is copied using the function "strcpy" to the variable "name".
    // 
    //      This process is repeated to the different text files used
    // to store subscriber data until all required subscriber data 
    // has been gathered.

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

    // Nice little greeting to user.

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

    // Declare calculation variables

    int roomDays, icuDays, roomCharge, icuCharge;

    // Prompts user for how many days they have spent
    // in hospital rooms and ICU.

    printf("Enter how many days spent in hospital room: ");
    scanf("%d", &roomDays);
    printf("Enter how many days spent in ICU: ");
    scanf("%d", &icuDays);
    if (roomDays < 0 || icuDays < 0){
        printf("Days spent can not be less than 0, returning to main menu..\n");
        menu();
    }

    // Calculates claim value based on subscriber's plan.

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

    // Prompts user for variety charges.

    int hSupply, hSurgical, hOther;
    printf("Enter amount of hospital supplies and service charges: ");
    scanf("%d", &hSupply);
    printf("Enter amount of surgical charges: ");
    scanf("%d", &hSurgical);
    printf("Enter amount of other charges: ");
    scanf("%d", &hOther);

    // Calculates claim amount.

    int sum = 0, outstand, printOutstand;
    sum = roomCharge + icuCharge + hSupply + hSurgical + hOther;
    outstand = claimable - sum;
    printOutstand = 0 - outstand;

    // Checks whether user has claimed more than their
    // limit or not.

    if (outstand < 0){
        printf("You have surpassed your claim limit and have RM %d outstanding fees\n", printOutstand);
        overlimit = 1;
    }

    // Prints subscriber details.

    printf("---------------------\n");
    printf("Subscriber Details\n");
    printf("ID: %d\n", x);
    printf("Name: %s\n", name);
    printf("Year Claimed: 1\n");
    printf("Insurance Claimed: %d\n", sum);
    printf("Balance left: %d\n", outstand);
    printf("---------------------\n");

    // Opens and write down insurance claim calculations
    // to the text files.

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

    // Keeps track of the amount of Annual Claim Limit subscribers
    // who have exhausted all their eligible amount.

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

    // Keeps track of the total amount claimed by Lifetime
    // Claim Limit subscribers.

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

    // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();
}

void accInfo(){

    // The "accInfo" function is simply a function that is used
    // to run both "accInfoA" and "accInfoB" functions at once.

    accInfoA();
    accInfoB();

    // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();
}

void searchFunc(){

    // The "searchFunc" function prompts the user to use which of the
    // available search criterias to search for subscriber records.

    int searchCriteria;

    // Prompts which criteria to use.
    
    printf("Available Search Criteria\n");
    printf("1. Search by ID\n");
    printf("2. Search by name\n");
    printf("3. Search by plan\n");
    printf("4. Search by claim limit type\n");
    printf("5. Search by age\n");

    printf("Choose option: ");
    scanf("%d", &searchCriteria);

    // Checks for user input and runs the relevant function.

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

    // The "accInfoA" function is used to display the total amount
    // claimed by Lifetime Claim Limit Subscribers.

    // Variable Declarations.

    int count, sum = 0, line, limit;

    // Reads the "nextclaim.txt" file to be used as loop limit.

    FILE *nextlimit = fopen("nextclaim.txt", "r");
    fscanf(nextlimit,"%d", &limit);
    fclose(nextlimit);

    // Reads the "lifeclaim.txt" file and sum it all up.

    FILE *flifeclaim = fopen("lifeclaim.txt", "r");
        count = 0;
        while (count < limit){
            fscanf(flifeclaim, "%d", &line);
            sum = sum + line;
            count++;
        }
        fclose(flifeclaim);

    // Prints the sum.

    printf("Total amount claimed by Lifetime Claim Limit Subscribers: RM %d\n", sum);
}

void accInfoB(){

    // The function "accInfoB" is used to display the amount of
    // Annual Claim Limit Subscribers who have exhausted
    // all their eligible amount.

    // Variable Declarations.

    int count, sum = 0, line, limit;

    // Reads the "nextid.txt" file to be used as loop limit.

    FILE *nextlimit = fopen("nextid.txt", "r");
    fscanf(nextlimit,"%d", &limit);
    fclose(nextlimit);

    // Reads the "overlimit.txt" file and sum it all up.

    FILE *foverlimit = fopen("overlimit.txt", "r");
        count = 0;
        while (count < limit){
            fscanf(foverlimit, "%d", &line);
            sum = sum + line;
            count++;
        }
        fclose(foverlimit);

    // Prints the sum.

    printf("Total number of Annual Claim Limit subscribers who have exhausted all their eligible amount: %d\n", sum);
}

void actualSearch(int x){

    // The "actualSearch" function serves as the main search engine for the "seaarchFunc" function.
    // subscriber ID's are sent to this function as argument (int x) from other functions such as "searchName"
    // to be used as line number indicator similarly to the one used in the function "insClaim".

    // Variable declarations.

    int count, limit, line, lineNumber;
    char name[32];

    // Subtracts user ID by 1 since counting start from 0.

    lineNumber = x - 1;

    // Reads the "nextid.txt" file to find the amount of existing
    // subscribers to be used as a crawling limiter.

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    // Crawling variable declarations.

    char cLine[32];
    int iLine;

    // Subscriber data variable declarations.

    int year, plan, type, claimable, age;

    // Reads through the relevant text files for subscriber data and
    // assigns them as value to related variable to be used later.

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

    // Prints all data that was collected earlier.

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

    // This function allows the user to search
    // for a subscriber's record using their ID.

    // Variable delcaration.

    int id;

    // Prompts the user for a subscriber ID.

    printf("Enter ID: ");
    scanf("%d", id);
    
    // Passes the subscriber ID to the function "actualSearch"
    // as an argument 

    actualSearch(id);

    // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();
}

void searchName(){

    // This function allows the user to search
    // for a subscriber's record using their name.

    // Variable declarations.

    int count, idCount, limit, idCatch, idIndex = 0;
    char name[32], cLine[32];
    int idHolder[32];
    int strComp;

    // Prompts the user for a subscriber's name

    printf("Enter name: ");
    scanf(" %s", &name);

    // Reads the "nextid.txt" file to find the amount of existing
    // subscribers to be used as a crawling limiter.

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    // Reads through the file "name.txt" and when a line matches the
    // name inputted earlier, the line number is assigned as a value
    // to the variable "idCatch" which is then assigned as a value to the array
    // "idHolder", this goes on until all subscribers' names have been checked.

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

    // Passes each subscriber ID one by one as argument to the
    // function "actualSearch".

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

     // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();
}

void searchPlan(){

    // This function allows the user to search
    // for all subsribers' records that are subscribed
    // to a specific plan.

    // Variable declarations.

    int count, idCount, limit, idCatch, idIndex = 0, plan, iLine;
    char cLine[32];
    int idHolder[32];
    int strComp;

    // Prompts user to enter the plan of the subscribers they are looking for.

    printf("1. Plan120\n");
    printf("2. Plan150\n");
    printf("3. Plan200\n");
    printf("Enter plan (1, 2, or 3): ");
    scanf(" %d", &plan);

    // Checks whether the entered integer is a valid plan or not.

    if (plan < 0 || plan > 3){
        printf("Wrong input, returning to main menu..\n");
        menu();
    }

    // Reads the "nextid.txt" file to find the amount of existing
    // subscribers to be used as a crawling limiter.

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    // Reads through the file "plan.txt" and when a line matches the
    // plan inputted earlier, the line number is assigned as a value
    // to the variable "idCatch" which is then assigned as a value to the array
    // "idHolder", this goes on until all subscribers' plans have been checked.

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

    // Passes each subscriber ID one by one as argument to the
    // function "actualSearch".

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

     // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();
}

void searchType(){

    // This function allows the user to search
    // for all subsribers' records that are subscribed
    // to a specific claim limit type.

    // Variable declarations.

    int count, idCount, limit, idCatch, idIndex = 0, type, iLine;
    int idHolder[32];

    // Prompts user to enter the claim limit type of the subscribers they are looking for.

    printf("1. Annual Claim Limit\n");
    printf("2. Lifetime Claim Limit\n");
    printf("Enter claim limit: ");
    scanf(" %d", &type);

    // Checks whether the entered integer is a valid claim limit type or not.

    if (type < 0 || type > 2){
        printf("Wrong input, returning to main menu..\n");
        menu();
    }

    // Reads the "nextid.txt" file to find the amount of existing
    // subscribers to be used as a crawling limiter.

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    // Reads through the file "type.txt" and when a line matches the
    // claim limit type inputted earlier, the line number is assigned as a value
    // to the variable "idCatch" which is then assigned as a value to the array
    // "idHolder", this goes on until all subscribers' claim limit types have been checked.

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

    // Passes each subscriber ID one by one as argument to the
    // function "actualSearch".

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

     // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();
}

void searchAge(){

    // This function allows the user to search
    // for all subsribers' records that are of a specific age.

    // Variable declarations.

    int count, idCount, limit, idCatch, idIndex = 0, age, iLine;
    int idHolder[32];

    // Prompts user to enter the age of the subscribers they are looking for.

    printf("Enter age: ");
    scanf(" %d", &age);

    // Checks whether the entered integer is a valid age or not.

    if (age < 0 || age > 55){
        printf("Wrong input, returning to main menu..\n");
        menu();
    }

    // Reads the "nextid.txt" file to find the amount of existing
    // subscribers to be used as a crawling limiter.

    FILE *fidlimit = fopen("nextid.txt", "r");
    fscanf(fidlimit,"%d", &limit);
    fclose(fidlimit);

    // Reads through the file "age.txt" and when a line matches the
    // age inputted earlier, the line number is assigned as a value
    // to the variable "idCatch" which is then assigned as a value to the array
    // "idHolder", this goes on until all subscribers' ages have been checked.

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

    // Passes each subscriber ID one by one as argument to the
    // function "actualSearch".

    idCount = 0;
    while (idCount < idIndex){
        actualSearch(idHolder[idCount]);
        idCount++;
    }

     // Program flow proceeds to the "returnToMenu" function.

    returnToMenu();
}

void returnToMenu(){

    // This function is called multiple times throughout the program.
    // Its purpose is to allow the user to go back to the main menu
    // after using one of the program's available features.

    // Variable declaration.

    int navHolder;

    // Prompts user whether they want to go back to the main menu
    // or quit the program.

    printf("Return to menu?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Choose option: ");
    scanf("%d", &navHolder);

    // Checks for user input and runs the relevant function.

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

    // This function's purpose is to stop the program.
    // That's it, nothing else.

    return 0;
}
