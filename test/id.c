#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("file.txt", "a");
    FILE *idgen = fopen("id.txt", "r");
    
    if (f == NULL){
    printf("Error opening file!\n");
    }

    int placeholder, age, plan, id, nextid;
    char name[20], customer[128];

    fscanf(idgen,"%d", &id);
    nextid = id + 1;
    printf("Enter name: ");
    //scanf("%c", &name);
    gets(name);
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

    
    return 0;
}