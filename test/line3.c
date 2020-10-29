#include <stdio.h>

int main(){
    int x = 6;
    int limit = 10;
    int lineNumber = x - 1, placeholder;
    int numHolder[10];
    static const char filename[] = "line.txt";
    FILE *file = fopen(filename, "r");
    int count = 0;
    if ( file != NULL ){
        int line; /* or other suitable maximum line size */
        while (count < limit) /* read a line */    
        {
            fscanf(file, "%d", &line);
            if (count == lineNumber)
            {
                line = line + 100;
                //printf("%d", line);
                //scanf("%d", placeholder);
            }
            numHolder[count] = line;
            printf("%d\n", numHolder[count]);
            count++;
        }
        fclose(file);
        //printf("%d", numHolder[1]);
        FILE *numWrite = fopen("line.txt", "w");
        fprintf(numWrite, "%d\n", numHolder[0]);
        fclose(numWrite);

        FILE *numAppend = fopen("line.txt", "a");
        
        count = 1;
        while (count < limit){
            //printf("inside %d\n", numHolder[count]);
            fprintf(numAppend, "%d\n", numHolder[count]);
            count++;
        }
        //printf("outside\n");
        fclose(numAppend);
        scanf("%d", placeholder);
    }
    return 0;
}