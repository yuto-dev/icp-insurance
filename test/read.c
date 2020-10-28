#include <stdio.h>
#include <stdlib.h>

int main(){
    int placeholder;
    FILE *myFile;
    myFile = fopen("somenumbers.txt", "r");

    //read file into array
    char numberArray[128][10];
    int i;

    if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }

    for (i = 0; i < 7; i++){
        fscanf(myFile, "%s;", &numberArray[i] );
    }

    //for (i = 0; i < 7; i++){
       // printf("Number is: %s\n\n", numberArray[i]);
   // }

    fclose(myFile);
    scanf("%d", &placeholder);
    return 0;
}