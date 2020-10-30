#include <stdio.h>

int main(){
    int x = 7;
    int limit = 10;
    int sum = 0;
    int lineNumber = x + 1, placeholder;
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
                printf("this is the line\n");
            }
            sum = sum + line;
            numHolder[count] = line;
            printf("%d\n", numHolder[count]);
            count++;
        }
        printf("%d", sum);
        fclose(file);
        //printf("%s", numHolder);
        scanf("%d", placeholder);
    }
    return 0;
}