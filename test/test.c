#include <stdio.h>
 
#define MAXCHAR 1000
int main() {
    int i;
    int pog;
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "test.txt";
 
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
    printf("done");
    printf("%s", str);
    scanf("%d", pog);
    return 0;
}